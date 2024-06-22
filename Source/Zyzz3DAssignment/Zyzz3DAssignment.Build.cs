// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Zyzz3DAssignment : ModuleRules
{
	public Zyzz3DAssignment(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
