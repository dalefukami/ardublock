package com.ardublock.translator.block.roboblocks;

import com.ardublock.translator.Translator;

public class IfSensor5Off extends IfSensorOff
{
	public IfSensor5Off(Long blockId, Translator translator, String codePrefix, String codeSuffix, String label)
	{
		super(blockId, translator, codePrefix, codeSuffix, label);
		this.setSensor(5);
	}
}
