// Copyright SCB Enterprises

using UnrealBuildTool;
using System.Collections.Generic;

public class Battle_TankTarget : TargetRules
{
	public Battle_TankTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Battle_Tank" } );
	}
}
