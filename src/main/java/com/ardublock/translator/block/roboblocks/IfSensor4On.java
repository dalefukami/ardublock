package com.ardublock.translator.block.roboblocks;

import com.ardublock.translator.Translator;

public class IfSensor4On extends IfSensorOn
{
	public IfSensor4On(Long blockId, Translator translator, String codePrefix, String codeSuffix, String label)
	{
		super(blockId, translator, codePrefix, codeSuffix, label);
		this.setSensor(4);
	}
}
