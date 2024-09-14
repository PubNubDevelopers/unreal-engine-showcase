#include "UJsonFormatter.h"

bool UJsonFormatter::ExtractMembershipInformation(const FString& JsonInput, TArray<FChannelStruct>& OutChannels)
{
	// Create a JSON Reader
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonInput);

	// JSON Object to hold the parsed data
	TSharedPtr<FJsonObject> JsonObject;

	// Deserialize the JSON data
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		// Get the "data" array from the JSON
		const TArray<TSharedPtr<FJsonValue>>* DataArray;

		if (JsonObject->TryGetArrayField(TEXT("data"), DataArray))
		{
			for (const TSharedPtr<FJsonValue>& Value : *DataArray)
			{
				// Create a new channel struct
				FChannelStruct ChannelStruct;

				// Get the "channel" object
				const TSharedPtr<FJsonObject> ChannelObject = Value->AsObject()->GetObjectField(TEXT("channel"));

				// Parse the necessary fields
				ChannelStruct.ChannelID = ChannelObject->GetStringField(TEXT("id"));
				ChannelStruct.Updated = Value->AsObject()->GetStringField(TEXT("updated"));
				ChannelStruct.ETag = Value->AsObject()->GetStringField(TEXT("eTag"));

				// Add the struct to the output array
				OutChannels.Add(ChannelStruct);
			}

			return true; // Successfully parsed
		}
	}

	return false; // Failed to parse JSON
}

bool UJsonFormatter::ExtractUserListInformation(const FString& JsonInput, TArray<FUserStruct>& OutUsers)
{
	// Create a JSON Reader
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonInput);

	// JSON Object to hold the parsed data
	TSharedPtr<FJsonObject> JsonObject;

	// Deserialize the JSON data
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		// Get the "data" array from the JSON
		const TArray<TSharedPtr<FJsonValue>>* DataArray;

		if (JsonObject->TryGetArrayField(TEXT("data"), DataArray))
		{
			for (const TSharedPtr<FJsonValue>& Value : *DataArray)
			{
				// Create a new user struct
				FUserStruct UserStruct;

				// Get the "uuid" object and extract the "id" field
				const TSharedPtr<FJsonObject> UUIDObject = Value->AsObject()->GetObjectField(TEXT("uuid"));
				UserStruct.UserID = UUIDObject->GetStringField(TEXT("id"));

				// Get the other fields: "updated" and "eTag"
				UserStruct.Updated = Value->AsObject()->GetStringField(TEXT("updated"));
				UserStruct.ETag = Value->AsObject()->GetStringField(TEXT("eTag"));

				// Add the struct to the output array
				OutUsers.Add(UserStruct);
			}

			return true; // Successfully parsed
		}
	}

	return false; // Failed to parse JSON
}