package com.ardublock.translator.block.roboblocks;

import com.ardublock.translator.Translator;
import com.ardublock.translator.block.TranslatorBlock;
import com.ardublock.translator.block.exception.SocketNullException;
import com.ardublock.translator.block.exception.SubroutineNotDeclaredException;

public class IfSensorOff extends TranslatorBlock
{
	private int sensor = 0;
	public IfSensorOff(Long blockId, Translator translator, String codePrefix, String codeSuffix, String label)
	{
		super(blockId, translator);
	}

	protected void setSensor(int sensor)
	{
		this.sensor = sensor;
	}

	@Override
	public String toCode() throws SocketNullException, SubroutineNotDeclaredException
	{		
		RoboblocksUtil.setupEnv(translator);
	
		String ret = "if (robo.sensorIsOff("+this.sensor+")) {\n";
		
		TranslatorBlock translatorBlock = getTranslatorBlockAtSocket(0);
		while (translatorBlock != null)
		{
			ret = ret + translatorBlock.toCode();
			translatorBlock = translatorBlock.nextTranslatorBlock();
		}
		ret = ret + "}\n";
		return ret;
	}
}
