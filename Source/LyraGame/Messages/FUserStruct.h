#pragma once
#include "FUserStruct.generated.h" // Required for USTRUCT macros

USTRUCT(BlueprintType)
struct FUserStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FString UserID;  // This will map to the "id" field inside "uuid"

	UPROPERTY(BlueprintReadWrite)
	FString Updated;

	UPROPERTY(BlueprintReadWrite)
	FString ETag;
};
