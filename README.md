PubNub's Enhanced Lyra Game with In-Game Chat, Online Presence, and More!
====================================
Welcome to PubNub's Lyra Game Enhanced with our Unreal Chat and Unreal SDKs!

This is an Unreal Engine game built using the [Lyra](https://dev.epicgames.com/community/learning/paths/Z4/lyra-starter-game) game, an over-the-shoulder shooting game built alongside UE 5 development to serve as an excellent starting point for new games and understanding the engine.

PubNub has enhanced this functionality by integrating real-time features utilizing our new [Unreal Chat SDK](https://www.pubnub.com/docs/chat/unreal-chat-sdk/overview) to easily power the chat in the main menu of the game with features such as:
* In-Game Messaging: Send and receive messages in the main menu by a central chat object that easily maintains different chats.
* Memberships: Communicate with different players through direct, group, and public channels that are managed via [memberships](https://www.pubnub.com/docs/chat/unreal-chat-sdk/learn/chat-entities/membership) which maintain the relationship between a user and a channel.
* History: Historical messages are fetched and ordered by timetokens.
* Presence: Detect when users come and go online/offline.
* User Search: Search for users to add and create different conversations with specific users.
* Blueprint Compatible: The Unreal Chat SDK is Blueprint compatible, and the entire chat example was built using Blueprints.

While not implemented in this demo, you can further enhance this functionality by utilizing out-of-the-box Chat SDK features such as:
* Typing Indicators: Provide real-time feedback when someone is composing a message
* Reactions: Add, get, and delete reactions for messages
* Quotes: Users can reference previous messages within a conversation.
* Threads: Organize conversations into threads, making it easier to follow and respond to specific topics.
* Pinned Messages: Allow users to pin a message to a channel so that it is placed at the top of the channel.
* Unread Messages: How many messages users missed while they were offline
* Read Receipts: Indications if other users have received and viewed a message.
* Moderation: Allow users to flag messages and users for admin review.

While players are playing the game (in the level L_Expanse), our [Unreal SDK](https://www.pubnub.com/docs/sdks/unreal) powers features such as:

* In-Game Messaging: Send and receive messages while playing the game.
* Channels: Communicate with different players through whisper (private), group, and all (public) chat.
* Presence: Detect when users are online/offline
* Blueprint Compatible: The Unreal SDK is Blueprint compatable, and the entire chat example was built using Blueprints.

While this README is focused on the PubNub functionality added to the game, please review the [learning path](https://dev.epicgames.com/community/learning/paths/Z4/lyra-starter-game) from Epic Games to understand the base game itself.

Note: 
* For the Unreal Chat SDK to function, you need to enable [App Context](https://www.pubnub.com/docs/general/metadata/basics) in your PubNub keyset, which is the feature that lets you store and manage metadata. This will be shown in the next step.
* This game is meant to serve as a simple sample of how easy it is to power real-time chat and other features using PubNub.
* The game is actively in development and more features are planned to be incorporated in the near future.

## Prerequisites
You'll need to perform the following before getting started. Make sure you follow the [Unreal Chat SDK](https://www.pubnub.com/docs/chat/unreal-chat-sdk/overview) and the [Unreal SDK](https://www.pubnub.com/docs/sdks/unreal) for specific details or updated changes to installation instructions.

### Set up Project Enviornment
1. Download Unreal Engine 5.0 and higher. This project was built wiht 5.4.4.
2. Clone the content of the [Unreal Chat SDK repository](https://github.com/pubnub/unreal-engine-chat) and [Unreal SDK repository](https://github.com/pubnub/unreal-engine) into the Plugins folder. Change the sdk folder names to PubnubChatSDK and Pubnub respectively.
3. Generate C++ project files (as we need to add the SDK to the build file) by rick clicking on your `.uproject` file.
4. Both private module dependencies have already been added for you in `Source/_{YourProject}_/_{YourProject}_.Build.cs`.
5. Build the solution.
6. Open the PubNubLyra.uproject in UE.
7. Click Edit > Plugins, and ensure that both the PubNub Chat SDK and the PubNub SDK are enabled.
8. In the same plugins folder, ensure the JSON Blueprint Utilities Plugin is enabled. It should be by default.
9. Click Edit > Project Settings and scroll down to the Plugins section and click Pubnub SDK.
10. Add your publish and subscribe keys obtained in the next step and save. Ensure the Initialize Automatically Checkbox is checked.
11. We will initialize the PubNub Chat SDK in a later step, located in the function `InitializePubNub` in `B_LyraGameInstance`, which is the default Game Instance in `All/Content`.

### Get Your PubNub Keys
1. Sign in to your [PubNub Dashboard](https://admin.pubnub.com/). You are now in the Admin Portal.
2. Click on the generated app and keyset or create your own App and Keyset by giving them a name.
3. Enable Presence by clicking on the slider to turn it on. A pop-up will require that you enter in “ENABLE”. Enter “ENABLE” in all caps and then press the “Enable” button. Enable the "Generate Leave on TCP FIN or RST checkbox", which generates leave events when clients close their connection (used to track occupancy and remove non-connected clients in app). You can leave the rest of the default settings.
4. Do the same for App Context, which is the feature that lets you store and manage metadata for users, channels and the relationships between them (membership). This is *required* for the Chat SDK to function and work.
5. Do the same for Message Persistence, which allows messages to be stored on the PubNub platform. Select a duration of how long you would like to retain messages.
6. Enable Stream Controller.
7. Click on save changes.
8. Save the Pub/Sub Keys.
9. Create a [Function](https://www.pubnub.com/docs/serverless/functions/overview) that utilizes [AWS Translate](https://www.pubnub.com/integrations/amazon-translate/) and [Tisane's](https://www.pubnub.com/integrations/tisane-labs-nlp/) Profanity API to translate languages and mask profane messages, respectively. Create a Before Publish fire, and moderate on the channel `moderation.*`.

### Add the Keys to the Chat SDK initialization
1. Navigate to `All/Content/B_LyraGameInstace`.
2. Open the function `InitializePubNub` in the graph view.
3. Add the PubNub keys to the `InitChat` blueprint.

You are *almost* ready to start playing the game - first, we need to break down where the functionality we want to focus on lives.

## Files Adjusted
While there are multiple levels in the game, there are two we will be focusing on: L_LyraFrontEnd and L_Expanse. Each serves a different purpose, and the PubNub SDKs power different functionality in each level:

* L_LyraFrontEnd: The main menu of the game. The PubNub Chat SDK powers real-time chat, presence, player search, and more.
* L_Expanse: The elimination mode of the game. The PubNub SDK powers chat and presence.

The following files are of focus to review for this game and pertain to PubNub Functionality. All functionality has been built using Blueprints, so please take a look at the Graph view of each Blueprint to examine functionality. Everything is located in the Content > PubNub folder. Specific functionality:
- FrontEnd Folder: Contains widgets that build the front-end that's powered by the PubNub Chat SDK. Specifically, WB_FrontEnd_Chat houses the chat functionality, W_UserList houses each conversation, and W_CreateChannel allows users to search, add, and create conversations.
- Chat Folder: Contains WB_ChatBox, which Contains the chatbox and most of the logic of the app, including PubNub setup, channel cycling, etc and also WB_PresenceCount, which displays the occupancy count.

Other relevant files not located in the `All/Content/PubNub` folder:
* `All/Content/UI/B_LyraFrontendStateComponent`: Initializes the PubNub Chat SDK
* `All/Content/UI/Menu/W_LyraFrontEnd`: Contains the widget blueprint for the front-end of the chat and is what initializes the front-end pubnub references and widgets.
* `All/Plugins/ShooterCoreContent/UserInterface`: Contains the UI for the Elimination Game mode and is where the chat and presence UIs live and become initialized at.

## Interacting and Playing the Game
To begin playing the game, start the game in the editor (this opens the default level, L_LyraFrontEnd), which utilizes the Unreal Chat SDK. 
* Open the chat by clicking on the chat button on the bottom right-hand corner of the screen.
* This opens the chat window. There are different sections for different type of conversations: public, group, and direct.
* Click on the dropdowns for each to see the list of conversations the user is currently connected to.
* For direct conversations, you will see a gray or green circle next to the user name. This denotes their (online = green, offline = gray) status.
* Clicking on a conversation will open that conversation's message history in the chat window.
* You can then type in the message input to send messages and communicate with that intended recipient(s).
* Click on the "+" button for either the direct or group drop down list headers. This opens the create a group/direct conversation and allows you to search for other users.
* Enter a user name to start searching for them. As you type, the list of users updates based on your entered text. Click on the users you wish to add to create a conversation with.
* You will receive errors if attempting to add more than one person to a direct conversation or fewer than one user for group conversations.
* For group conversations, give the group a name.
* Click create for either type of conversation to initialize the conversation. This will add the conversation to the drop-down list depending on the type of conversation.
* Click on Play Game -> Start a Game -> Elimination -> Start.
  
* The Elimination game mode (L_Expanse) will now begin playing, which utilizes the Unreal SDK.
* The number of currently logged in players will be displayed at the top of the screen (Presence).
* You can open the chat with the `Enter` key on the keyboard. This focuses the chat and darkens the chat elements.
* The chat history is not retrieved in this game mode.
* The chat utilizes profanity filtering and moderation via PubNub Functions we set-up earlier.
* * Hit the `ESC` key and click on Options.
* In the Gameplay section, there is an added option under Chat: Filter Abusive Language. Enable/Disable the setting to allow/block profane messages.
* Send a message containing profanity or change your language under the Gameplay -> Language setting to receive a message from another player in that language.
* Type a message and press the `Enter` key again to send the message. This display the message to you and everyone else (all = public channel)
* There are different commands you can trigger in the chat. Enter `/help` in the chat to pull up these various commands
* Type `/whisper <userId>` to establish a private message channel with another player. The text will become green and opens a private messaging channel between you and that associated player - no one else can see these messages.
* Type `/join <groupName>` to join a group. The text will become orange and opens a group channel between you and that group after you start to type messages.
* Type `/leave <groupName>` to leave the specified group.
* You can cycle between channels with the `Left CNTRL` key on the keyboard. Keep in mind you need to have at least one other channel you are associated with before cycling channels.
* Both the open chat and channel cycling key can be changed to another key or button the gamepad via the Input Mapping Context. This will also change the text displayed on the screen for what key to press to open or cycle channels.

## Testing Chat using the Debug Console
In the [Admin Portal](https://admin.pubnub.com/), there is a Debug Console that allows you to test your PubNub app and keys as another user. You'll need to keep in mind a few details when testing:
- The channel architecture necessary to subscribe and receive messages as follows in the L_LyraFrontEnd level, aka the main menu of the game powered by the Unreal Chat SDK:
    - public: `all-main-menu`. There is only one public channel and every user will be able to communicate in this channel.
    - group: `group.<groupname>`
    - direct: `direct.<gameUUID>-<AdminPortalUUID>`. Since the debug console can't handle logic to understand if the whisper contains that message, you need to always format the channels in this order in the debug console. For the sake of this demo, the UUID is always set to be `pubnub-3920`.

- The channel architecture necessary to subscribe and receive messages as follows in the L_Exapnse level, aka the Elimination mode of the game powered by the Unreal SDK:
    - group: `group.<groupname>`
    - whisper: `whisper.<gameUUID>-<AdminPortalUUID>`. Since the debug console can't handle logic to understand if the whisper contains that message, you need to always format the channels in this order in the debug console. For the sake of this demo, the UUID is always set to be `pubnub-3920`.
- Due to the architecture of the Unreal SDK and how the Debug Console sends messages, you need to format the message in JSON format in the Debug Console with the `text` and `publisher` fields. An example: {"text":"hi there!","publisher":"amy"}

## Links
- PubNub Unreal Chat SDK: https://www.pubnub.com/docs/chat/unreal-chat-sdk/overview
- PubNub Unreal SDK: https://www.pubnub.com/docs/sdks/unreal
- Admin Portal (to obtain Pub/Sub API Keys): https://admin.pubnub.com/

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
