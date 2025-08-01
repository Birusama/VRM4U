// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VrmExtensionRimFilterData.generated.h"


UCLASS(BlueprintType)
class VRM4URENDER_API UVrmExtensionRimFilterData : public UObject
{
	GENERATED_UCLASS_BODY()

	struct FFilterData {
		bool bUseFilter = false;
		int Priority = 0;

		bool bUseCustomLighPosition = false;
		FVector LightPosition;
		FVector LightDirection;

		bool bUseCustomLighColor = false;
		FLinearColor LightColor;

		float SampleScreenScale = 0.25f;
		float SampleScale = 1.5;

	};

public:	
	// Sets default values for this actor's properties
	//UVrmExtensionRimFilterData();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	bool bUseFilter = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	int Priority = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	bool bUseCustomLighPosition = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	FVector LightPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	FVector LightDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	bool bUseCustomLighColor = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	FLinearColor LightColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	float SampleScreenScale = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRM4U")
	float SampleScale = 1.0;


	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	//UObject::UObject(const FObjectInitializer& ObjectInitializer)
	//	virtual void OnConstruction(const FTransform& Transform) override;
	//virtual void BeginDestroy() override;
	virtual void PostInitProperties() override;

	FFilterData GetFilterData() {
		FFilterData d;

		d.bUseFilter = bUseFilter;
		d.Priority = Priority;

		d.bUseCustomLighPosition = bUseCustomLighPosition;
		d.LightPosition = LightPosition;
		d.LightDirection = LightDirection;

		d.bUseCustomLighColor = bUseCustomLighColor;
		d.LightColor = LightColor;

		d.SampleScreenScale = SampleScreenScale;
		d.SampleScale = SampleScale;

		return d;
	}
};
