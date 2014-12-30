package com.ardublock.translator.block.roboblocks;

import com.ardublock.translator.Translator;
import com.ardublock.translator.block.TranslatorBlock;
import com.ardublock.translator.block.exception.SocketNullException;
import com.ardublock.translator.block.exception.SubroutineNotDeclaredException;

public class TurnRight extends RoboblocksTranslatorBlock
{

	public TurnRight(Long blockId, Translator translator, String codePrefix, String codeSuffix, String label)
	{
		super(blockId, translator, codePrefix, codeSuffix, label);
	}

	@Override
	protected String getMethodName()
	{
		return "turnRight";		
	}

}
