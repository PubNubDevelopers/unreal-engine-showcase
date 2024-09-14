#pragma once
#include "CoreMinimal.h"
#include "JsonUtilities.h"
#include "FChannelStruct.h"
#include "FUserStruct.h"
#include "UJsonFormatter.generated.h"

UCLASS(Blueprintable)
class LYRAGAME_API UJsonFormatter : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Json")
	static bool ExtractMembershipInformation(const FString& JsonInput, TArray<FChannelStruct>& OutChannels);

	UFUNCTION(BlueprintCallable, Category = "Json")
	static bool ExtractUserListInformation(const FString& JsonInput, TArray<FUserStruct>& OutUsers);
};
