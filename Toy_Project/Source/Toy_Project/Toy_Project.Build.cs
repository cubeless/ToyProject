// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Toy_Project : ModuleRules
{
	public Toy_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
