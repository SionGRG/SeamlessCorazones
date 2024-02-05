// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SeamlessCorazonesHUD.generated.h"

UCLASS()
class ASeamlessCorazonesHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASeamlessCorazonesHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

