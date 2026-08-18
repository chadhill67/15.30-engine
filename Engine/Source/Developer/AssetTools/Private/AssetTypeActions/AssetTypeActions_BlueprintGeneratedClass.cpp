// Copyright Epic Games, Inc. All Rights Reserved.

#include "AssetTypeActions/AssetTypeActions_BlueprintGeneratedClass.h"
#include "Engine/BlueprintGeneratedClass.h"
//#include "ToolMenus.h"
#include "Misc/PackageName.h"
#include "Misc/MessageDialog.h"
#include "Factories/BlueprintFactory.h"
#include "ThumbnailRendering/SceneThumbnailInfo.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "IContentBrowserSingleton.h"
#include "ContentBrowserModule.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

UClass* FAssetTypeActions_BlueprintGeneratedClass::GetSupportedClass() const
{
	return UBlueprintGeneratedClass::StaticClass();
}

TWeakPtr<IClassTypeActions> FAssetTypeActions_BlueprintGeneratedClass::GetClassTypeActions(const FAssetData& AssetData) const
{
	return nullptr;
}

#undef LOCTEXT_NAMESPACE