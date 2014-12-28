package com.ardublock.translator.block.roboblocks;

import com.ardublock.translator.Translator;
import com.ardublock.translator.block.TranslatorBlock;
import com.ardublock.translator.block.exception.SocketNullException;
import com.ardublock.translator.block.exception.SubroutineNotDeclaredException;

public class BlinkLedBlock extends TranslatorBlock
{

	public BlinkLedBlock(Long blockId, Translator translator, String codePrefix, String codeSuffix, String label)
	{
		super(blockId, translator, codePrefix, codeSuffix, label);
	}

	@Override
	public String toCode() throws SocketNullException, SubroutineNotDeclaredException
	{
		RoboblocksUtil.setupEnv(translator);
		
		String ret = "robo.blinkLed();\n";
		
		return codePrefix + ret + codeSuffix;
	}

}
