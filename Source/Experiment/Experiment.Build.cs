// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Experiment : ModuleRules
{
	public Experiment(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "Networking", "Sockets" });
	}
}
