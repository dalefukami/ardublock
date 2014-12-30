package com.ardublock.translator.block.roboblocks;

import com.ardublock.translator.Translator;

public class IfSensor2Off extends IfSensorOff
{
	public IfSensor2Off(Long blockId, Translator translator, String codePrefix, String codeSuffix, String label)
	{
		super(blockId, translator, codePrefix, codeSuffix, label);
		this.setSensor(2);
	}
}
