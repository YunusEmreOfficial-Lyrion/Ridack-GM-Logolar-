//  --------------------------------------------
// |	Arat						Lyrion YunusEmreOfficial			|
//  --------------------------------------------

BOOL CInstanceBase::IsGameMaster()


//  --------------------------------------------
// |	Değiştir						Lyrion YunusEmreOfficial			|
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
// |	Son						Lyrion YunusEmreOfficial			|
//  --------------------------------------------

