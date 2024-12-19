class CfgPatches
{
	class zBotEditorClientDayz_sound_new
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
	};
};
class CfgSoundShaders
{
	class BotEditor_fight_eng_SoundShaders
	{
		range = 200;
		volume = 1.0;
	};
	class BotEditor_squid_game_so_SoundShaders_new : BotEditor_fight_eng_SoundShaders
	{
		samples[] = {{"BotEditorClient_sound\Sound_event\squid-game\squid-game-so",1}};
	};
};
class CfgSoundSets
{
	class BotEditor_Base_SoundSet
	{
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BotEditor_BotVoice_squid_game_so_SoundSets_new: BotEditor_Base_SoundSet
	{
		soundShaders[] = {"BotEditor_squid_game_so_SoundShaders_new"};
	};
};
