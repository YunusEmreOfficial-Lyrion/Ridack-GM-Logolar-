
//  --------------------------------------------
// |	Arat						Lyrion YunusEmreOfficial			|
//  --------------------------------------------


#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	0);
#endif


//  --------------------------------------------
// |	Altına Ekle						Lyrion YunusEmreOfficial			|
//  --------------------------------------------


#ifdef GM_NEW_AFFECTS
	PyModule_AddIntConstant(poModule, "GM_NEW_AFFECTS", 1);
#else
	PyModule_AddIntConstant(poModule, "GM_NEW_AFFECTS", 0);
#endif

//  --------------------------------------------
// |	Son						Lyrion YunusEmreOfficial			|
//  --------------------------------------------

