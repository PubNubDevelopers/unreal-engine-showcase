PubNub Bomb Relay - Unreal Engine Multiplayer Showcase
====================================
Welcome to **PubNub Bomb Relay**, an Unreal Engine 5.5 sample project that demonstrates how to build a real multiplayer game on top of PubNub. It is intended as a learning resource: every networking feature you would normally implement with a dedicated game server (lobby state, gameplay event replication, in-match chat) is implemented here exclusively with PubNub, using the [PubNub Unreal SDK](https://www.pubnub.com/docs/sdks/unreal) and the [PubNub Unreal Chat SDK](https://www.pubnub.com/docs/chat/unreal-chat-sdk/overview).

> The goal of this project is to show **how to implement PubNub functionalities in a real project**, not to be a finished game. Read the Blueprints alongside the documentation links - everything PubNub-related is built in Blueprints and is meant to be opened, inspected, and copied into your own project.

## Features

The demo focuses on three classes of real-time functionality, all powered by PubNub:

* **Lobby - syncing player states** Players browse a list of game servers, host or join one, and gather in a lobby where their join/leave events, readiness, and player metadata are kept in sync across every connected client using the PubNub Unreal SDK (publish/subscribe + Presence).
* **In-match gameplay event sync** While a match is running in the `L_GameMap` level, gameplay events (bomb pickups, bomb drops/relays, door interactions, color displays, round results, etc.) are published over PubNub channels so every player observes a consistent world state.
* **In-game chat** A chat window built on the PubNub Unreal Chat SDK is available **during a match**. It demonstrates channel join/leave, message publish, message history, and unread/notification handling using the Chat SDK's high-level primitives.

The project is built so that the PubNub-specific code lives in clearly named Blueprints (`BP_GameInstance`, `GM_RelayGameMode`, `BP_GamePlayerController`, `W_Servers`, `W_Lobby`, `W_GameHUD`, `W_PubnubChat`, ...) - open them in the Graph view to see how each feature is wired.

## Requirements

* **Unreal Engine 5.5** (this project's `EngineAssociation` is `5.5`).
* A C++ toolchain that can build Unreal projects (Visual Studio 2022 with the *Game development with C++* workload on Windows, or Xcode on macOS).
* A free [PubNub account](https://admin.pubnub.com/) and an app keyset (Publish + Subscribe keys).

## Project Setup

You have **two mutually exclusive ways** to bring the PubNub plugins into the project. Pick one. Do **not** combine them - the standalone repos and the Gaming SDK package both ship modules named `Pubnub` / `PubnubChat`, and having both at the same time will cause a module name collision and the project will fail to load.

### Option A - Clone this repository with submodules (recommended for development)

The two PubNub plugins are registered as Git submodules under `Plugins/`:

* `Plugins/Pubnub` -> [pubnub/unreal-engine](https://github.com/pubnub/unreal-engine)
* `Plugins/PubnubChat` -> [pubnub/unreal-engine-chat](https://github.com/pubnub/unreal-engine-chat)

Clone the project together with its submodules:

```bash
git clone --recurse-submodules <this-repo-url>
```

If you have already cloned without `--recurse-submodules`, initialize the submodules from inside the project folder:

```bash
git submodule update --init --recursive
```

To later pull the newest SDK releases:

```bash
git submodule update --remote --merge
```

### Option B - Clone without submodules and install the PubNub Gaming SDK

If you would rather use the single FAB-marketplace package that bundles both SDKs, clone this repo **without** submodules:

```bash
git clone <this-repo-url>
```

Then install the [PubNub Unreal Gaming SDK](https://github.com/pubnub/unreal-gaming-sdk) into the project's `Plugins/` folder (either from the FAB marketplace download or directly from the GitHub release artifacts). The Gaming SDK ships as a single plugin that contains both the `Pubnub` and `PubnubChat` modules inside it - which is exactly why you must **not** also pull the submodules from Option A (you would end up with the same module names registered twice and the project would fail to load).

### After picking an option

1. Right-click `PubnubBombRelay.uproject` and choose **Generate Visual Studio project files** (Windows) / the equivalent on your platform.
2. Open `PubnubBombRelay.sln` (or the generated workspace) and **Build** the `PubnubBombRelayEditor` target in *Development Editor* configuration.
3. Launch the editor by opening `PubnubBombRelay.uproject`.
4. In the editor, go to **Edit > Plugins**, search for "PubNub" and make sure both **PubNub SDK** and **PubNub Chat SDK** are enabled. Also verify that **JSON Blueprint Utilities** is enabled (it ships enabled by default and is required by `.uproject`).
5. Restart the editor if prompted.

## Configure your PubNub Keyset

The Chat SDK requires several keyset features to be turned on. Open the [PubNub Admin Portal](https://admin.pubnub.com/), select (or create) your app and keyset, and enable everything listed under [Prerequisites in the Unreal Chat SDK docs](https://www.pubnub.com/docs/chat/unreal-chat-sdk/overview#prerequisites). At minimum you will need:

* **Presence** - so lobby and in-match player join/leave events fire. Also enable *Generate Leave on TCP FIN or RST* so disconnects are detected reliably.
* **App Context** (Objects/Metadata) - required by the Chat SDK to store users, channels, and memberships.
* **Message Persistence** - so historical chat messages can be fetched when a player opens the chat.
* **Stream Controller** - required for channel-group features used by the Chat SDK.

Save your changes, then copy the **Publish Key** and **Subscribe Key** from the keyset page - you will paste them into the project next.

## Add Your Keys to the Project

The keys are kept in a single place and reused by both the core PubNub SDK and the Chat SDK initialization:

1. In the Content Browser, open `Content/PubnubBombRelay/Blueprints/BP_GameInstance`.
2. In the **My Blueprint** > **Variables** panel, locate the string variables **`PublishKey`** and **`SubscribeKey`**.
3. Paste your Publish/Subscribe keys as their default values and **Compile** + **Save** the Blueprint.

That is the only place keys need to be entered - both the Unreal SDK initialization and the Chat SDK initialization read from these variables.

## Running the Demo

Because this is a multiplayer demo, you will want at least two clients running against the same keyset.

* In-editor: set **Play > Number of Players** to 2 (or more), or launch **Standalone Game** windows in parallel.
* Or package a build (`File > Package Project`) and run multiple instances of the packaged executable.

The intended game flow is:

1. The game boots into the **Main Menu** level `L_MainMenu`.
2. Type your **Player ID** and click the **Play** button. This opens the **Servers** screen (`W_Servers`), where you can either host a new server or join an existing one listed by other players in real time.
3. After joining/hosting, you enter the **Lobby** (`W_Lobby`) - player slots and per-player **readiness** state stay in sync via PubNub.
4. When **all players are ready**, the host's **Start Game** button becomes enabled. Clicking it starts the match and loads everyone into the **Game** level `L_GameMap`. The HUD (`W_GameHUD`) is shown, gameplay events are replicated through PubNub, and the **in-game chat** (`W_PubnubChat`) becomes available.
5. **Gameplay**: the round is about remembering which door is the correct one to pass the bomb to the next player (indicated by a **green arrow**). Players keep relaying the bomb until someone fails to pass it in time and the bomb explodes on them.
6. When a player explodes, the **Game End** screen (`W_GameEnd`) is shown to everyone. The host can then **restart the game**.

Open the Blueprints listed above to see exactly which PubNub APIs power each step - those graphs are the actual learning material this repo is built around.

## Useful Links

* [PubNub Unreal SDK documentation](https://www.pubnub.com/docs/sdks/unreal)
* [PubNub Unreal Chat SDK documentation](https://www.pubnub.com/docs/chat/unreal-chat-sdk/overview)
* [PubNub Admin Portal](https://admin.pubnub.com/) - obtain Publish/Subscribe keys and enable keyset features
* [pubnub/unreal-engine](https://github.com/pubnub/unreal-engine) - core SDK source (used as the `Plugins/Pubnub` submodule)
* [pubnub/unreal-engine-chat](https://github.com/pubnub/unreal-engine-chat) - Chat SDK source (used as the `Plugins/PubnubChat` submodule)
* [pubnub/unreal-gaming-sdk](https://github.com/pubnub/unreal-gaming-sdk) - combined Gaming SDK package (alternative to the two submodules)

## License

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
