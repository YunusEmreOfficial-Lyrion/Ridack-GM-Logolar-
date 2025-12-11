//  --------------------------------------------
// |	Arat						Lyrion YunusEmreOfficial v0 Mob drop			|
//  --------------------------------------------


if (GetGMLevel() > GM_LOW_WIZARD)
	{
		m_afAffectFlag.Set(AFF_YMIR);
		m_bPKMode = PK_MODE_PROTECT;
	}


//  --------------------------------------------
// |	Değiştir						Lyrion YunusEmreOfficial v0 Mob drop			|
//  --------------------------------------------

#ifdef GM_NEW_AFFECTS
		if (GetGMLevel() == GM_IMPLEMENTOR)
		{
			m_afAffectFlag.Set(AFFECT_YMIR_SA);
			m_bPKMode = PK_MODE_PROTECT;
		}
		else if (GetGMLevel() == GM_HIGH_WIZARD)
		{
			m_afAffectFlag.Set(AFFECT_YMIR_GA);
			m_bPKMode = PK_MODE_PROTECT;
		}
		else if (GetGMLevel() == GM_GOD)
		{
			m_afAffectFlag.Set(AFFECT_YMIR_GM);
			m_bPKMode = PK_MODE_PROTECT;
		}
		else if (GetGMLevel() == GM_LOW_WIZARD)
		{
			m_afAffectFlag.Set(AFFECT_YMIR_TGM);
			m_bPKMode = PK_MODE_PROTECT;
		}
#else
		if (GetGMLevel() > GM_LOW_WIZARD)
		{
			m_afAffectFlag.Set(AFF_YMIR);
			m_bPKMode = PK_MODE_PROTECT;
		}
#endif

//  --------------------------------------------
// |	Son						Lyrion YunusEmreOfficial v0 Mob drop			|
//  --------------------------------------------
