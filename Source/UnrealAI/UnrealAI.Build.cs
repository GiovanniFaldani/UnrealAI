// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealAI : ModuleRules
{
	public UnrealAI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UnrealAI",
			"UnrealAI/Variant_Platforming",
			"UnrealAI/Variant_Platforming/Animation",
			"UnrealAI/Variant_Combat",
			"UnrealAI/Variant_Combat/AI",
			"UnrealAI/Variant_Combat/Animation",
			"UnrealAI/Variant_Combat/Gameplay",
			"UnrealAI/Variant_Combat/Interfaces",
			"UnrealAI/Variant_Combat/UI",
			"UnrealAI/Variant_SideScrolling",
			"UnrealAI/Variant_SideScrolling/AI",
			"UnrealAI/Variant_SideScrolling/Gameplay",
			"UnrealAI/Variant_SideScrolling/Interfaces",
			"UnrealAI/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
