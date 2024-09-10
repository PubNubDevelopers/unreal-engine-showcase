#pragma once

//#include "CoreMinimal.h" // Essential Unreal Engine includes
#include "FChannelStruct.generated.h" // Required for USTRUCT macros

USTRUCT(BlueprintType)
struct FChannelStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FString ChannelID;

	UPROPERTY(BlueprintReadWrite)
	FString Updated;

	UPROPERTY(BlueprintReadWrite)
	FString ETag;
};
