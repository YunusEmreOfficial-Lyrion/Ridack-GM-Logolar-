//  --------------------------------------------
// |	Arat						Lyrion YunusEmreOfficial v0 Mob drop			|
//  --------------------------------------------

BOOL CInstanceBase::IsGameMaster()


//  --------------------------------------------
// |	Değiştir						Lyrion YunusEmreOfficial v0 Mob drop			|
//  --------------------------------------------


BOOL CInstanceBase::IsGameMaster()
{
	if (m_kAffectFlagContainer.IsSet(AFFECT_YMIR))
		return true;
	if (m_kAffectFlagContainer.IsSet(AFFECT_YMIR_SA))
		return true;
	if (m_kAffectFlagContainer.IsSet(AFFECT_YMIR_GA))
		return true;
	if (m_kAffectFlagContainer.IsSet(AFFECT_YMIR_GM))
		return true;
	if (m_kAffectFlagContainer.IsSet(AFFECT_YMIR_TGM))
		return true;

	return false;
}

//  --------------------------------------------
// |	Son						Lyrion YunusEmreOfficial v0 Mob drop			|
//  --------------------------------------------
