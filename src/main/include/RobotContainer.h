// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>
#include "commands/ExampleCommand.h"
#include "commands/cGroup_MidRung.h"
#include "commands/cGroup_HighRung.h"
#include "commands/cGroup_ClimbTraversal.h"
#include "commands/command_LeftClimbByPositionRetract.h"
#include "commands/command_LeftClimbByPositionExtend.h"
#include "commands/command_RightClimbByPositionRetract.h"
#include "commands/command_RightClimbByPositionExtend.h"

#include "subsystems/subsystem_Climb.h"
#include "subsystems/ExampleSubsystem.h"

#include "frc/XboxController.h"
#include "frc2/command/button/JoystickButton.h"
#include "Constants.h"
#include <frc/Joystick.h>

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

 private:
  // The robot's subsystems and commands are defined here...
  ExampleSubsystem m_subsystem;
  ExampleCommand m_autonomousCommand;
  subsystem_Climb m_Climb; 

  frc::XboxController xbox{ControllerConstants::xboxPort};
  void ConfigureButtonBindings();
};
