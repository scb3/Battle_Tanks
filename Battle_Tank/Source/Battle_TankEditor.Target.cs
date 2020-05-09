// Copyright SCB Enterprises

using UnrealBuildTool;
using System.Collections.Generic;

public class Battle_TankEditorTarget : TargetRules
{
	public Battle_TankEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Battle_Tank" } );
	}
}
