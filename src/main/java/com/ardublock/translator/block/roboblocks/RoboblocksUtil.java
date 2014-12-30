package com.ardublock.translator.block.roboblocks;

import com.ardublock.translator.Translator;

public class RoboblocksUtil
{
	public static void setupEnv(Translator translator)
	{
		translator.addHeaderFile("Servo.h");
		translator.addHeaderFile("Roboblocks.h");
		
		translator.addDefinitionCommand("Roboblocks robo;");
		
		translator.addSetupCommand("robo.setup();");
	}
}
