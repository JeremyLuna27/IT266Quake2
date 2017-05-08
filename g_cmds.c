#include "g_local.h"
#include "m_player.h"
void SP_monster_berserk (edict_t *self);
void SP_monster_gladiator (edict_t *self);
void SP_monster_gunner (edict_t *self);
void SP_monster_infantry (edict_t *self);
void SP_monster_soldier_light (edict_t *self);
void SP_monster_soldier (edict_t *self);
void SP_monster_soldier_ss (edict_t *self);
void SP_monster_tank (edict_t *self);
void SP_monster_medic (edict_t *self);
void SP_monster_flipper (edict_t *self);
void SP_monster_chick (edict_t *self);
void SP_monster_parasite (edict_t *self);
void SP_monster_flyer (edict_t *self);
void SP_monster_brain (edict_t *self);
void SP_monster_floater (edict_t *self);
void SP_monster_hover (edict_t *self);
void SP_monster_mutant (edict_t *self);
void SP_monster_supertank (edict_t *self);
void SP_monster_boss2 (edict_t *self);
void SP_monster_jorg (edict_t *self);
void SP_monster_boss3_stand (edict_t *self);
int currentWave;
int perksOn;


void WaveSpawn1()
{
	int x,y,z;
	int i;
	//edict_t *mob;
	edict_t  *mob[50];
	
	int mon1x, mon1y, mon1z;
	int mon2x, mon2y, mon2z;
	int mon3x, mon3y, mon3z;
	int mon4x, mon4y, mon4z;
	int mon5x, mon5y, mon5z;
	int mon6x, mon6y, mon6z;
	int mon7x, mon7y, mon7z;
	int mon8x, mon8y, mon8z;
	int mon9x, mon9y, mon9z;
	int mon10x, mon10y, mon10z;
	int mon11x, mon11y, mon11z;
	int mon12x, mon12y, mon12z;
	int mon13x, mon13y, mon13z;
	int mon14x, mon14y, mon14z;
	int mon15x, mon15y, mon15z;
	int mon16x, mon16y, mon16z;
	int mon17x, mon17y, mon17z;
	int mon18x, mon18y, mon18z;
	int mon19x, mon19y, mon19z;
	int mon20x, mon20y, mon20z;
	int mon21x, mon21y, mon21z;

	currentWave++;
	mon1x=-596;
	mon1y=-2425;
	mon1z=329;

	mon2x= -556;
	mon2y= -2238;
	mon2z= 329;

	mon3x= -678;
	mon3y= -2575;
	mon3z= 293;	

	mon4x= -861;
	mon4y= -2315;
	mon4z= 195;

	mon5x= -817;
	mon5y= -1886;
	mon5z= 105;

	mon6x= -805;
	mon6y= -2579;
	mon6z= 713;

	mon7x= -547;
	mon7y= -1809;
	mon7z= 105;

	mon8x= -1393;
	mon8y= -1942;
	mon8z= 105;

	mon9x= -1807;
	mon9y= -1590;
	mon9z= 69;

	mon10x= -2106;
	mon10y= -1513;
	mon10z= 41;

	mon11x= -2097;
	mon11y= -992;
	mon11z= -54;

	mon12x= -1917;
	mon12y= -1513;
	mon12z= -54;

	mon13x= -2502;
	mon13y= -617;
	mon13z= -46;

	mon14x= -2716;
	mon14y= -298;
	mon14z= 33;

	mon15x= -1945;
	mon15y= -1049;
	mon15z= -54;

	mon16x= -2936;
	mon16y= 101;
	mon16z= -14;

	mon17x= -2557;
	mon17y= -93;
	mon17z= 32;

	mon18x= -2539;
	mon18y= 98;
	mon18z= -14;

	mon19x= -2008;
	mon19y= -140;
	mon19z= 73;

	mon20x= -2292;
	mon20y= -1194;
	mon20z= 299;

	mon21x= -343;
	mon21y= -2854;
	mon21z= 489;


	//sizeof(mob)
	for(i = 0;i < 21; i++)
	{
		mob[i] = G_Spawn();
		SP_monster_soldier_ss(mob[i]);
		//SP_monster_gladiator(mob[i]);
		gi.linkentity(mob[i]);
	}

	/*
	for(i=0; i<2; i++)
	{
		mob->s.origin[0]=x;
		mob->s.origin[1]=y;
		mob->s.origin[2]=z;
		gi.linkentity(mob);
	}
	*/
	mob[0]->s.origin[0]=mon1x;
	mob[0]->s.origin[1]=mon1y;
	mob[0]->s.origin[2]=mon1z;
	gi.linkentity(mob[0]);

	mob[1]->s.origin[0]=mon2x;
	mob[1]->s.origin[1]=mon2y;
	mob[1]->s.origin[2]=mon2z;
	gi.linkentity(mob[1]);

	mob[2]->s.origin[0]=mon3x;
	mob[2]->s.origin[1]=mon3y;
	mob[2]->s.origin[2]=mon3z;
	gi.linkentity(mob[2]);

	mob[3]->s.origin[0]=mon4x;
	mob[3]->s.origin[1]=mon4y;
	mob[3]->s.origin[2]=mon4z;
	gi.linkentity(mob[3]);

	mob[4]->s.origin[0]=mon5x;
	mob[4]->s.origin[1]=mon5y;
	mob[4]->s.origin[2]=mon5z;
	gi.linkentity(mob[4]);

	mob[5]->s.origin[0]=mon6x;
	mob[5]->s.origin[1]=mon6y;
	mob[5]->s.origin[2]=mon6z;
	gi.linkentity(mob[5]);

	mob[6]->s.origin[0]=mon7x;
	mob[6]->s.origin[1]=mon7y;
	mob[6]->s.origin[2]=mon7z;
	gi.linkentity(mob[6]);

	mob[7]->s.origin[0]=mon8x;
	mob[7]->s.origin[1]=mon8y;
	mob[7]->s.origin[2]=mon8z;
	gi.linkentity(mob[7]);

	mob[8]->s.origin[0]=mon9x;
	mob[8]->s.origin[1]=mon9y;
	mob[8]->s.origin[2]=mon9z;
	gi.linkentity(mob[8]);

	mob[9]->s.origin[0]=mon10x;
	mob[9]->s.origin[1]=mon10y;
	mob[9]->s.origin[2]=mon10z;
	gi.linkentity(mob[9]);

	mob[10]->s.origin[0]=mon11x;
	mob[10]->s.origin[1]=mon11y;
	mob[10]->s.origin[2]=mon11z;
	gi.linkentity(mob[10]);

	mob[11]->s.origin[0]=mon12x;
	mob[11]->s.origin[1]=mon12y;
	mob[11]->s.origin[2]=mon12z;
	gi.linkentity(mob[11]);

	mob[12]->s.origin[0]=mon13x;
	mob[12]->s.origin[1]=mon13y;
	mob[12]->s.origin[2]=mon13z;
	gi.linkentity(mob[12]);

	mob[13]->s.origin[0]=mon14x;
	mob[13]->s.origin[1]=mon14y;
	mob[13]->s.origin[2]=mon14z;
	gi.linkentity(mob[13]);

	mob[14]->s.origin[0]=mon15x;
	mob[14]->s.origin[1]=mon15y;
	mob[14]->s.origin[2]=mon15z;
	gi.linkentity(mob[14]);

	mob[15]->s.origin[0]=mon16x;
	mob[15]->s.origin[1]=mon16y;
	mob[15]->s.origin[2]=mon16z;
	gi.linkentity(mob[15]);

	mob[16]->s.origin[0]=mon17x;
	mob[16]->s.origin[1]=mon17y;
	mob[16]->s.origin[2]=mon17z;
	gi.linkentity(mob[16]);

	mob[17]->s.origin[0]=mon18x;
	mob[17]->s.origin[1]=mon18y;
	mob[17]->s.origin[2]=mon18z;
	gi.linkentity(mob[17]);

	mob[18]->s.origin[0]=mon19x;
	mob[18]->s.origin[1]=mon19y;
	mob[18]->s.origin[2]=mon19z;
	gi.linkentity(mob[18]);

	mob[19]->s.origin[0]=mon20x;
	mob[19]->s.origin[1]=mon20y;
	mob[19]->s.origin[2]=mon20z;
	gi.linkentity(mob[19]);

	mob[20]->s.origin[0]=mon21x;
	mob[20]->s.origin[1]=mon21y;
	mob[20]->s.origin[2]=mon21z;
	gi.linkentity(mob[20]);
}

void WaveSpawn2()
{
	int x,y,z;
	int i;
	//edict_t *mob;
	edict_t  *mob[50];
	
	int mon1x, mon1y, mon1z;
	int mon2x, mon2y, mon2z;
	int mon3x, mon3y, mon3z;
	int mon4x, mon4y, mon4z;
	int mon5x, mon5y, mon5z;
	int mon6x, mon6y, mon6z;
	int mon7x, mon7y, mon7z;
	int mon8x, mon8y, mon8z;
	int mon9x, mon9y, mon9z;
	int mon10x, mon10y, mon10z;
	int mon11x, mon11y, mon11z;
	int mon12x, mon12y, mon12z;
	int mon13x, mon13y, mon13z;
	int mon14x, mon14y, mon14z;
	int mon15x, mon15y, mon15z;
	int mon16x, mon16y, mon16z;
	int mon17x, mon17y, mon17z;
	int mon18x, mon18y, mon18z;
	int mon19x, mon19y, mon19z;
	int mon20x, mon20y, mon20z;
	int mon21x, mon21y, mon21z;

	currentWave++;
	mon1x=-596;
	mon1y=-2425;
	mon1z=329;

	mon2x= -556;
	mon2y= -2238;
	mon2z= 329;

	mon3x= -678;
	mon3y= -2575;
	mon3z= 293;	

	mon4x= -861;
	mon4y= -2315;
	mon4z= 195;

	mon5x= -817;
	mon5y= -1886;
	mon5z= 105;

	mon6x= -805;
	mon6y= -2579;
	mon6z= 713;

	mon7x= -547;
	mon7y= -1809;
	mon7z= 105;

	mon8x= -1393;
	mon8y= -1942;
	mon8z= 105;

	mon9x= -1807;
	mon9y= -1590;
	mon9z= 69;

	mon10x= -2106;
	mon10y= -1513;
	mon10z= 41;

	mon11x= -2097;
	mon11y= -992;
	mon11z= -54;

	mon12x= -1917;
	mon12y= -1513;
	mon12z= -54;

	mon13x= -2502;
	mon13y= -617;
	mon13z= -46;

	mon14x= -2716;
	mon14y= -298;
	mon14z= 33;

	mon15x= -1945;
	mon15y= -1049;
	mon15z= -54;

	mon16x= -2936;
	mon16y= 101;
	mon16z= -14;

	mon17x= -2557;
	mon17y= -93;
	mon17z= 32;

	mon18x= -2539;
	mon18y= 98;
	mon18z= -14;

	mon19x= -2008;
	mon19y= -140;
	mon19z= 73;

	mon20x= -2292;
	mon20y= -1194;
	mon20z= 299;

	mon21x= -343;
	mon21y= -2854;
	mon21z= 489;

	//sizeof(mob)
	for(i = 0;i < 21; i++)
	{
		mob[i] = G_Spawn();
		//SP_monster_soldier_ss(mob[i]);
		SP_monster_gladiator(mob[i]);
		gi.linkentity(mob[i]);
	}

	/*
	for(i=0; i<2; i++)
	{
		mob->s.origin[0]=x;
		mob->s.origin[1]=y;
		mob->s.origin[2]=z;
		gi.linkentity(mob);
	}
	*/
	mob[0]->s.origin[0]=mon1x;
	mob[0]->s.origin[1]=mon1y;
	mob[0]->s.origin[2]=mon1z;
	gi.linkentity(mob[0]);

	mob[1]->s.origin[0]=mon2x;
	mob[1]->s.origin[1]=mon2y;
	mob[1]->s.origin[2]=mon2z;
	gi.linkentity(mob[1]);

	mob[2]->s.origin[0]=mon3x;
	mob[2]->s.origin[1]=mon3y;
	mob[2]->s.origin[2]=mon3z;
	gi.linkentity(mob[2]);

	mob[3]->s.origin[0]=mon4x;
	mob[3]->s.origin[1]=mon4y;
	mob[3]->s.origin[2]=mon4z;
	gi.linkentity(mob[3]);

	mob[4]->s.origin[0]=mon5x;
	mob[4]->s.origin[1]=mon5y;
	mob[4]->s.origin[2]=mon5z;
	gi.linkentity(mob[4]);

	mob[5]->s.origin[0]=mon6x;
	mob[5]->s.origin[1]=mon6y;
	mob[5]->s.origin[2]=mon6z;
	gi.linkentity(mob[5]);

	mob[6]->s.origin[0]=mon7x;
	mob[6]->s.origin[1]=mon7y;
	mob[6]->s.origin[2]=mon7z;
	gi.linkentity(mob[6]);

	mob[7]->s.origin[0]=mon8x;
	mob[7]->s.origin[1]=mon8y;
	mob[7]->s.origin[2]=mon8z;
	gi.linkentity(mob[7]);

	mob[8]->s.origin[0]=mon9x;
	mob[8]->s.origin[1]=mon9y;
	mob[8]->s.origin[2]=mon9z;
	gi.linkentity(mob[8]);

	mob[9]->s.origin[0]=mon10x;
	mob[9]->s.origin[1]=mon10y;
	mob[9]->s.origin[2]=mon10z;
	gi.linkentity(mob[9]);

	mob[10]->s.origin[0]=mon11x;
	mob[10]->s.origin[1]=mon11y;
	mob[10]->s.origin[2]=mon11z;
	gi.linkentity(mob[10]);

	mob[11]->s.origin[0]=mon12x;
	mob[11]->s.origin[1]=mon12y;
	mob[11]->s.origin[2]=mon12z;
	gi.linkentity(mob[11]);

	mob[12]->s.origin[0]=mon13x;
	mob[12]->s.origin[1]=mon13y;
	mob[12]->s.origin[2]=mon13z;
	gi.linkentity(mob[12]);

	mob[13]->s.origin[0]=mon14x;
	mob[13]->s.origin[1]=mon14y;
	mob[13]->s.origin[2]=mon14z;
	gi.linkentity(mob[13]);

	mob[14]->s.origin[0]=mon15x;
	mob[14]->s.origin[1]=mon15y;
	mob[14]->s.origin[2]=mon15z;
	gi.linkentity(mob[14]);

	mob[15]->s.origin[0]=mon16x;
	mob[15]->s.origin[1]=mon16y;
	mob[15]->s.origin[2]=mon16z;
	gi.linkentity(mob[15]);

	mob[16]->s.origin[0]=mon17x;
	mob[16]->s.origin[1]=mon17y;
	mob[16]->s.origin[2]=mon17z;
	gi.linkentity(mob[16]);

	mob[17]->s.origin[0]=mon18x;
	mob[17]->s.origin[1]=mon18y;
	mob[17]->s.origin[2]=mon18z;
	gi.linkentity(mob[17]);

	mob[18]->s.origin[0]=mon19x;
	mob[18]->s.origin[1]=mon19y;
	mob[18]->s.origin[2]=mon19z;
	gi.linkentity(mob[18]);

	mob[19]->s.origin[0]=mon20x;
	mob[19]->s.origin[1]=mon20y;
	mob[19]->s.origin[2]=mon20z;
	gi.linkentity(mob[19]);

	mob[20]->s.origin[0]=mon21x;
	mob[20]->s.origin[1]=mon21y;
	mob[20]->s.origin[2]=mon21z;
	gi.linkentity(mob[20]);
}


void WaveSpawn3()
{
	int x,y,z;
	int i;
	//edict_t *mob;
	edict_t  *mob[50];
	
	int mon1x, mon1y, mon1z;
	int mon2x, mon2y, mon2z;
	int mon3x, mon3y, mon3z;
	int mon4x, mon4y, mon4z;
	int mon5x, mon5y, mon5z;
	int mon6x, mon6y, mon6z;
	int mon7x, mon7y, mon7z;
	int mon8x, mon8y, mon8z;
	int mon9x, mon9y, mon9z;
	int mon10x, mon10y, mon10z;
	int mon11x, mon11y, mon11z;
	int mon12x, mon12y, mon12z;
	int mon13x, mon13y, mon13z;
	int mon14x, mon14y, mon14z;
	int mon15x, mon15y, mon15z;
	int mon16x, mon16y, mon16z;
	int mon17x, mon17y, mon17z;
	int mon18x, mon18y, mon18z;
	int mon19x, mon19y, mon19z;
	int mon20x, mon20y, mon20z;
	int mon21x, mon21y, mon21z;

	currentWave++;
	mon1x=-596;
	mon1y=-2425;
	mon1z=329;

	mon2x= -556;
	mon2y= -2238;
	mon2z= 329;

	mon3x= -678;
	mon3y= -2575;
	mon3z= 293;	

	mon4x= -861;
	mon4y= -2315;
	mon4z= 195;

	mon5x= -817;
	mon5y= -1886;
	mon5z= 105;

	mon6x= -805;
	mon6y= -2579;
	mon6z= 713;

	mon7x= -547;
	mon7y= -1809;
	mon7z= 105;

	mon8x= -1393;
	mon8y= -1942;
	mon8z= 105;

	mon9x= -1807;
	mon9y= -1590;
	mon9z= 69;

	mon10x= -2106;
	mon10y= -1513;
	mon10z= 41;

	mon11x= -2097;
	mon11y= -992;
	mon11z= -54;

	mon12x= -1917;
	mon12y= -1513;
	mon12z= -54;

	mon13x= -2502;
	mon13y= -617;
	mon13z= -46;

	mon14x= -2716;
	mon14y= -298;
	mon14z= 33;

	mon15x= -1945;
	mon15y= -1049;
	mon15z= -54;

	mon16x= -2936;
	mon16y= 101;
	mon16z= -14;

	mon17x= -2557;
	mon17y= -93;
	mon17z= 32;

	mon18x= -2539;
	mon18y= 98;
	mon18z= -14;

	mon19x= -2008;
	mon19y= -140;
	mon19z= 73;

	mon20x= -2292;
	mon20y= -1194;
	mon20z= 299;

	mon21x= -343;
	mon21y= -2854;
	mon21z= 489;


	//sizeof(mob)
	for(i = 0;i < 21; i++)
	{
		mob[i] = G_Spawn();
		SP_monster_tank(mob[i]);
		//SP_monster_gladiator(mob[i]);
		gi.linkentity(mob[i]);
	}

	/*
	for(i=0; i<2; i++)
	{
		mob->s.origin[0]=x;
		mob->s.origin[1]=y;
		mob->s.origin[2]=z;
		gi.linkentity(mob);
	}
	*/
	mob[0]->s.origin[0]=mon1x;
	mob[0]->s.origin[1]=mon1y;
	mob[0]->s.origin[2]=mon1z;
	gi.linkentity(mob[0]);

	mob[1]->s.origin[0]=mon2x;
	mob[1]->s.origin[1]=mon2y;
	mob[1]->s.origin[2]=mon2z;
	gi.linkentity(mob[1]);

	mob[2]->s.origin[0]=mon3x;
	mob[2]->s.origin[1]=mon3y;
	mob[2]->s.origin[2]=mon3z;
	gi.linkentity(mob[2]);

	mob[3]->s.origin[0]=mon4x;
	mob[3]->s.origin[1]=mon4y;
	mob[3]->s.origin[2]=mon4z;
	gi.linkentity(mob[3]);

	mob[4]->s.origin[0]=mon5x;
	mob[4]->s.origin[1]=mon5y;
	mob[4]->s.origin[2]=mon5z;
	gi.linkentity(mob[4]);

	mob[5]->s.origin[0]=mon6x;
	mob[5]->s.origin[1]=mon6y;
	mob[5]->s.origin[2]=mon6z;
	gi.linkentity(mob[5]);

	mob[6]->s.origin[0]=mon7x;
	mob[6]->s.origin[1]=mon7y;
	mob[6]->s.origin[2]=mon7z;
	gi.linkentity(mob[6]);

	mob[7]->s.origin[0]=mon8x;
	mob[7]->s.origin[1]=mon8y;
	mob[7]->s.origin[2]=mon8z;
	gi.linkentity(mob[7]);

	mob[8]->s.origin[0]=mon9x;
	mob[8]->s.origin[1]=mon9y;
	mob[8]->s.origin[2]=mon9z;
	gi.linkentity(mob[8]);

	mob[9]->s.origin[0]=mon10x;
	mob[9]->s.origin[1]=mon10y;
	mob[9]->s.origin[2]=mon10z;
	gi.linkentity(mob[9]);

	mob[10]->s.origin[0]=mon11x;
	mob[10]->s.origin[1]=mon11y;
	mob[10]->s.origin[2]=mon11z;
	gi.linkentity(mob[10]);

	mob[11]->s.origin[0]=mon12x;
	mob[11]->s.origin[1]=mon12y;
	mob[11]->s.origin[2]=mon12z;
	gi.linkentity(mob[11]);

	mob[12]->s.origin[0]=mon13x;
	mob[12]->s.origin[1]=mon13y;
	mob[12]->s.origin[2]=mon13z;
	gi.linkentity(mob[12]);

	mob[13]->s.origin[0]=mon14x;
	mob[13]->s.origin[1]=mon14y;
	mob[13]->s.origin[2]=mon14z;
	gi.linkentity(mob[13]);

	mob[14]->s.origin[0]=mon15x;
	mob[14]->s.origin[1]=mon15y;
	mob[14]->s.origin[2]=mon15z;
	gi.linkentity(mob[14]);

	mob[15]->s.origin[0]=mon16x;
	mob[15]->s.origin[1]=mon16y;
	mob[15]->s.origin[2]=mon16z;
	gi.linkentity(mob[15]);

	mob[16]->s.origin[0]=mon17x;
	mob[16]->s.origin[1]=mon17y;
	mob[16]->s.origin[2]=mon17z;
	gi.linkentity(mob[16]);

	mob[17]->s.origin[0]=mon18x;
	mob[17]->s.origin[1]=mon18y;
	mob[17]->s.origin[2]=mon18z;
	gi.linkentity(mob[17]);

	mob[18]->s.origin[0]=mon19x;
	mob[18]->s.origin[1]=mon19y;
	mob[18]->s.origin[2]=mon19z;
	gi.linkentity(mob[18]);

	mob[19]->s.origin[0]=mon20x;
	mob[19]->s.origin[1]=mon20y;
	mob[19]->s.origin[2]=mon20z;
	gi.linkentity(mob[19]);

	mob[20]->s.origin[0]=mon21x;
	mob[20]->s.origin[1]=mon21y;
	mob[20]->s.origin[2]=mon21z;
	gi.linkentity(mob[20]);
}



char *ClientTeam (edict_t *ent)
{
	char		*p;
	static char	value[512];

	value[0] = 0;

	if (!ent->client)
		return value;

	strcpy(value, Info_ValueForKey (ent->client->pers.userinfo, "skin"));
	p = strchr(value, '/');
	if (!p)
		return value;

	if ((int)(dmflags->value) & DF_MODELTEAMS)
	{
		*p = 0;
		return value;
	}

	// if ((int)(dmflags->value) & DF_SKINTEAMS)
	return ++p;
}

qboolean OnSameTeam (edict_t *ent1, edict_t *ent2)
{
	char	ent1Team [512];
	char	ent2Team [512];

	if (!((int)(dmflags->value) & (DF_MODELTEAMS | DF_SKINTEAMS)))
		return false;

	strcpy (ent1Team, ClientTeam (ent1));
	strcpy (ent2Team, ClientTeam (ent2));

	if (strcmp(ent1Team, ent2Team) == 0)
		return true;
	return false;
}


void SelectNextItem (edict_t *ent, int itflags)
{
	gclient_t	*cl;
	int			i, index;
	gitem_t		*it;

	cl = ent->client;

	if (cl->chase_target) {
		ChaseNext(ent);
		return;
	}

	// scan  for the next valid one
	for (i=1 ; i<=MAX_ITEMS ; i++)
	{
		index = (cl->pers.selected_item + i)%MAX_ITEMS;
		if (!cl->pers.inventory[index])
			continue;
		it = &itemlist[index];
		if (!it->use)
			continue;
		if (!(it->flags & itflags))
			continue;

		cl->pers.selected_item = index;
		return;
	}

	cl->pers.selected_item = -1;
}

void SelectPrevItem (edict_t *ent, int itflags)
{
	gclient_t	*cl;
	int			i, index;
	gitem_t		*it;

	cl = ent->client;

	if (cl->chase_target) {
		ChasePrev(ent);
		return;
	}

	// scan  for the next valid one
	for (i=1 ; i<=MAX_ITEMS ; i++)
	{
		index = (cl->pers.selected_item + MAX_ITEMS - i)%MAX_ITEMS;
		if (!cl->pers.inventory[index])
			continue;
		it = &itemlist[index];
		if (!it->use)
			continue;
		if (!(it->flags & itflags))
			continue;

		cl->pers.selected_item = index;
		return;
	}

	cl->pers.selected_item = -1;
}

void ValidateSelectedItem (edict_t *ent)
{
	gclient_t	*cl;

	cl = ent->client;

	if (cl->pers.inventory[cl->pers.selected_item])
		return;		// valid

	SelectNextItem (ent, -1);
}


//=================================================================================

/*
==================
Cmd_Give_f

Give items to a client
==================
*/
void Cmd_Give_f (edict_t *ent)
{
	char		*name;
	gitem_t		*it;
	int			index;
	int			i;
	qboolean	give_all;
	edict_t		*it_ent;

	if (deathmatch->value && !sv_cheats->value)
	{
		gi.cprintf (ent, PRINT_HIGH, "You must run the server with '+set cheats 1' to enable this command.\n");
		return;
	}

	name = gi.args();

	if (Q_stricmp(name, "all") == 0)
		give_all = true;
	else
		give_all = false;

	if (give_all || Q_stricmp(gi.argv(1), "health") == 0)
	{
		if (gi.argc() == 3)
			ent->health = atoi(gi.argv(2));
		else
			ent->health = ent->max_health;
		if (!give_all)
			return;
	}

	if (give_all || Q_stricmp(name, "weapons") == 0)
	{
		for (i=0 ; i<game.num_items ; i++)
		{
			it = itemlist + i;
			if (!it->pickup)
				continue;
			if (!(it->flags & IT_WEAPON))
				continue;
			ent->client->pers.inventory[i] += 1;
		}
		if (!give_all)
			return;
	}

	if (give_all || Q_stricmp(name, "ammo") == 0)
	{
		for (i=0 ; i<game.num_items ; i++)
		{
			it = itemlist + i;
			if (!it->pickup)
				continue;
			if (!(it->flags & IT_AMMO))
				continue;
			Add_Ammo (ent, it, 1000);
		}
		if (!give_all)
			return;
	}

	if (give_all || Q_stricmp(name, "armor") == 0)
	{
		gitem_armor_t	*info;

		it = FindItem("Jacket Armor");
		ent->client->pers.inventory[ITEM_INDEX(it)] = 0;

		it = FindItem("Combat Armor");
		ent->client->pers.inventory[ITEM_INDEX(it)] = 0;

		it = FindItem("Body Armor");
		info = (gitem_armor_t *)it->info;
		ent->client->pers.inventory[ITEM_INDEX(it)] = info->max_count;

		if (!give_all)
			return;
	}

	if (give_all || Q_stricmp(name, "Power Shield") == 0)
	{
		it = FindItem("Power Shield");
		it_ent = G_Spawn();
		it_ent->classname = it->classname;
		SpawnItem (it_ent, it);
		Touch_Item (it_ent, ent, NULL, NULL);
		if (it_ent->inuse)
			G_FreeEdict(it_ent);

		if (!give_all)
			return;
	}

	if (give_all)
	{
		for (i=0 ; i<game.num_items ; i++)
		{
			it = itemlist + i;
			if (!it->pickup)
				continue;
			if (it->flags & (IT_ARMOR|IT_WEAPON|IT_AMMO))
				continue;
			ent->client->pers.inventory[i] = 1;
		}
		return;
	}

	it = FindItem (name);
	if (!it)
	{
		name = gi.argv(1);
		it = FindItem (name);
		if (!it)
		{
			gi.cprintf (ent, PRINT_HIGH, "unknown item\n");
			return;
		}
	}

	if (!it->pickup)
	{
		gi.cprintf (ent, PRINT_HIGH, "non-pickup item\n");
		return;
	}

	index = ITEM_INDEX(it);

	if (it->flags & IT_AMMO)
	{
		if (gi.argc() == 3)
			ent->client->pers.inventory[index] = atoi(gi.argv(2));
		else
			ent->client->pers.inventory[index] += it->quantity;
	}
	else
	{
		it_ent = G_Spawn();
		it_ent->classname = it->classname;
		SpawnItem (it_ent, it);
		Touch_Item (it_ent, ent, NULL, NULL);
		if (it_ent->inuse)
			G_FreeEdict(it_ent);
	}
}


/*
==================
Cmd_God_f

Sets client to godmode

argv(0) god
==================
*/
void Cmd_God_f (edict_t *ent)
{
	char	*msg;

	if (deathmatch->value && !sv_cheats->value)
	{
		gi.cprintf (ent, PRINT_HIGH, "You must run the server with '+set cheats 1' to enable this command.\n");
		return;
	}

	ent->flags ^= FL_GODMODE;
	if (!(ent->flags & FL_GODMODE) )
		msg = "godmode OFF\n";
	else
		msg = "godmode ON\n";

	gi.cprintf (ent, PRINT_HIGH, msg);
}


/*
==================
Cmd_Notarget_f

Sets client to notarget

argv(0) notarget
==================
*/
void Cmd_Notarget_f (edict_t *ent)
{
	char	*msg;

	if (deathmatch->value && !sv_cheats->value)
	{
		gi.cprintf (ent, PRINT_HIGH, "You must run the server with '+set cheats 1' to enable this command.\n");
		return;
	}

	ent->flags ^= FL_NOTARGET;
	if (!(ent->flags & FL_NOTARGET) )
		msg = "notarget OFF\n";
	else
		msg = "notarget ON\n";

	gi.cprintf (ent, PRINT_HIGH, msg);
}


/*
==================
Cmd_Noclip_f

argv(0) noclip
==================
*/
void Cmd_Noclip_f (edict_t *ent)
{
	char	*msg;

	if (deathmatch->value && !sv_cheats->value)
	{
		gi.cprintf (ent, PRINT_HIGH, "You must run the server with '+set cheats 1' to enable this command.\n");
		return;
	}

	if (ent->movetype == MOVETYPE_NOCLIP)
	{
		ent->movetype = MOVETYPE_WALK;
		msg = "noclip OFF\n";
	}
	else
	{
		ent->movetype = MOVETYPE_NOCLIP;
		msg = "noclip ON\n";
	}

	gi.cprintf (ent, PRINT_HIGH, msg);
}


/*
==================
Cmd_Use_f

Use an inventory item
==================
*/
void Cmd_Use_f (edict_t *ent)
{
	int			index;
	gitem_t		*it;
	char		*s;

	s = gi.args();
	it = FindItem (s);
	if (!it)
	{
		gi.cprintf (ent, PRINT_HIGH, "unknown item: %s\n", s);
		return;
	}
	if (!it->use)
	{
		gi.cprintf (ent, PRINT_HIGH, "Item is not usable.\n");
		return;
	}
	index = ITEM_INDEX(it);
	if (!ent->client->pers.inventory[index])
	{
		gi.cprintf (ent, PRINT_HIGH, "Out of item: %s\n", s);
		return;
	}

	it->use (ent, it);
}


/*
==================
Cmd_Drop_f

Drop an inventory item
==================
*/
void Cmd_Drop_f (edict_t *ent)
{
	int			index;
	gitem_t		*it;
	char		*s;

	s = gi.args();
	it = FindItem (s);
	if (!it)
	{
		gi.cprintf (ent, PRINT_HIGH, "unknown item: %s\n", s);
		return;
	}
	if (!it->drop)
	{
		gi.cprintf (ent, PRINT_HIGH, "Item is not dropable.\n");
		return;
	}
	index = ITEM_INDEX(it);
	if (!ent->client->pers.inventory[index])
	{
		gi.cprintf (ent, PRINT_HIGH, "Out of item: %s\n", s);
		return;
	}

	it->drop (ent, it);
}


/*
=================
Cmd_Inven_f
=================
*/
void Cmd_Inven_f (edict_t *ent)
{
	int			i;
	gclient_t	*cl;

	cl = ent->client;

	cl->showscores = false;
	cl->showhelp = false;

	if (cl->showinventory)
	{
		cl->showinventory = false;
		return;
	}

	cl->showinventory = true;

	gi.WriteByte (svc_inventory);
	for (i=0 ; i<MAX_ITEMS ; i++)
	{
		gi.WriteShort (cl->pers.inventory[i]);
	}
	gi.unicast (ent, true);
}

/*
=================
Cmd_InvUse_f
=================
*/
void Cmd_InvUse_f (edict_t *ent)
{
	gitem_t		*it;

	ValidateSelectedItem (ent);

	if (ent->client->pers.selected_item == -1)
	{
		gi.cprintf (ent, PRINT_HIGH, "No item to use.\n");
		return;
	}

	it = &itemlist[ent->client->pers.selected_item];
	if (!it->use)
	{
		gi.cprintf (ent, PRINT_HIGH, "Item is not usable.\n");
		return;
	}
	it->use (ent, it);
}

/*
=================
Cmd_WeapPrev_f
=================
*/
void Cmd_WeapPrev_f (edict_t *ent)
{
	gclient_t	*cl;
	int			i, index;
	gitem_t		*it;
	int			selected_weapon;

	cl = ent->client;

	if (!cl->pers.weapon)
		return;

	selected_weapon = ITEM_INDEX(cl->pers.weapon);

	// scan  for the next valid one
	for (i=1 ; i<=MAX_ITEMS ; i++)
	{
		index = (selected_weapon + i)%MAX_ITEMS;
		if (!cl->pers.inventory[index])
			continue;
		it = &itemlist[index];
		if (!it->use)
			continue;
		if (! (it->flags & IT_WEAPON) )
			continue;
		it->use (ent, it);
		if (cl->pers.weapon == it)
			return;	// successful
	}
}

/*
=================
Cmd_WeapNext_f
=================
*/
void Cmd_WeapNext_f (edict_t *ent)
{
	gclient_t	*cl;
	int			i, index;
	gitem_t		*it;
	int			selected_weapon;

	cl = ent->client;

	if (!cl->pers.weapon)
		return;

	selected_weapon = ITEM_INDEX(cl->pers.weapon);

	// scan  for the next valid one
	for (i=1 ; i<=MAX_ITEMS ; i++)
	{
		index = (selected_weapon + MAX_ITEMS - i)%MAX_ITEMS;
		if (!cl->pers.inventory[index])
			continue;
		it = &itemlist[index];
		if (!it->use)
			continue;
		if (! (it->flags & IT_WEAPON) )
			continue;
		it->use (ent, it);
		if (cl->pers.weapon == it)
			return;	// successful
	}
}

/*
=================
Cmd_WeapLast_f
=================
*/
void Cmd_WeapLast_f (edict_t *ent)
{
	gclient_t	*cl;
	int			index;
	gitem_t		*it;

	cl = ent->client;

	if (!cl->pers.weapon || !cl->pers.lastweapon)
		return;

	index = ITEM_INDEX(cl->pers.lastweapon);
	if (!cl->pers.inventory[index])
		return;
	it = &itemlist[index];
	if (!it->use)
		return;
	if (! (it->flags & IT_WEAPON) )
		return;
	it->use (ent, it);
}

/*
=================
Cmd_InvDrop_f
=================
*/
void Cmd_InvDrop_f (edict_t *ent)
{
	gitem_t		*it;

	ValidateSelectedItem (ent);

	if (ent->client->pers.selected_item == -1)
	{
		gi.cprintf (ent, PRINT_HIGH, "No item to drop.\n");
		return;
	}

	it = &itemlist[ent->client->pers.selected_item];
	if (!it->drop)
	{
		gi.cprintf (ent, PRINT_HIGH, "Item is not dropable.\n");
		return;
	}
	it->drop (ent, it);
}

/*
=================
Cmd_Kill_f
=================
*/
void Cmd_Kill_f (edict_t *ent)
{
	if((level.time - ent->client->respawn_time) < 5)
		return;
	ent->flags &= ~FL_GODMODE;
	ent->health = 0;
	meansOfDeath = MOD_SUICIDE;
	player_die (ent, ent, ent, 100000, vec3_origin);
}

/*
=================
Cmd_PutAway_f
=================
*/
void Cmd_PutAway_f (edict_t *ent)
{
	ent->client->showscores = false;
	ent->client->showhelp = false;
	ent->client->showinventory = false;
}


int PlayerSort (void const *a, void const *b)
{
	int		anum, bnum;

	anum = *(int *)a;
	bnum = *(int *)b;

	anum = game.clients[anum].ps.stats[STAT_FRAGS];
	bnum = game.clients[bnum].ps.stats[STAT_FRAGS];

	if (anum < bnum)
		return -1;
	if (anum > bnum)
		return 1;
	return 0;
}

/*
=================
Cmd_Players_f
=================
*/
void Cmd_Players_f (edict_t *ent)
{
	int		i;
	int		count;
	char	small[64];
	char	large[1280];
	int		index[256];

	count = 0;
	for (i = 0 ; i < maxclients->value ; i++)
		if (game.clients[i].pers.connected)
		{
			index[count] = i;
			count++;
		}

	// sort by frags
	qsort (index, count, sizeof(index[0]), PlayerSort);

	// print information
	large[0] = 0;

	for (i = 0 ; i < count ; i++)
	{
		Com_sprintf (small, sizeof(small), "%3i %s\n",
			game.clients[index[i]].ps.stats[STAT_FRAGS],
			game.clients[index[i]].pers.netname);
		if (strlen (small) + strlen(large) > sizeof(large) - 100 )
		{	// can't print all of them in one packet
			strcat (large, "...\n");
			break;
		}
		strcat (large, small);
	}

	gi.cprintf (ent, PRINT_HIGH, "%s\n%i players\n", large, count);
}

/*
=================
Cmd_Wave_f
=================
*/
void Cmd_Wave_f (edict_t *ent)
{
	int		i;

	i = atoi (gi.argv(1));

	// can't wave when ducked
	if (ent->client->ps.pmove.pm_flags & PMF_DUCKED)
		return;

	if (ent->client->anim_priority > ANIM_WAVE)
		return;

	ent->client->anim_priority = ANIM_WAVE;

	switch (i)
	{
	case 0:
		gi.cprintf (ent, PRINT_HIGH, "flipoff\n");
		ent->s.frame = FRAME_flip01-1;
		ent->client->anim_end = FRAME_flip12;
		break;
	case 1:
		gi.cprintf (ent, PRINT_HIGH, "salute\n");
		ent->s.frame = FRAME_salute01-1;
		ent->client->anim_end = FRAME_salute11;
		break;
	case 2:
		gi.cprintf (ent, PRINT_HIGH, "taunt\n");
		ent->s.frame = FRAME_taunt01-1;
		ent->client->anim_end = FRAME_taunt17;
		break;
	case 3:
		gi.cprintf (ent, PRINT_HIGH, "wave\n");
		ent->s.frame = FRAME_wave01-1;
		ent->client->anim_end = FRAME_wave11;
		break;
	case 4:
	default:
		gi.cprintf (ent, PRINT_HIGH, "point\n");
		ent->s.frame = FRAME_point01-1;
		ent->client->anim_end = FRAME_point12;
		break;
	}
}

/*
==================
Cmd_Say_f
==================
*/
void Cmd_Say_f (edict_t *ent, qboolean team, qboolean arg0)
{
	int		i, j;
	edict_t	*other;
	char	*p;
	char	text[2048];
	gclient_t *cl;

	if (gi.argc () < 2 && !arg0)
		return;

	if (!((int)(dmflags->value) & (DF_MODELTEAMS | DF_SKINTEAMS)))
		team = false;

	if (team)
		Com_sprintf (text, sizeof(text), "(%s): ", ent->client->pers.netname);
	else
		Com_sprintf (text, sizeof(text), "%s: ", ent->client->pers.netname);

	if (arg0)
	{
		strcat (text, gi.argv(0));
		strcat (text, " ");
		strcat (text, gi.args());
	}
	else
	{
		p = gi.args();

		if (*p == '"')
		{
			p++;
			p[strlen(p)-1] = 0;
		}
		strcat(text, p);
	}

	// don't let text be too long for malicious reasons
	if (strlen(text) > 150)
		text[150] = 0;

	strcat(text, "\n");

	if (flood_msgs->value) {
		cl = ent->client;

        if (level.time < cl->flood_locktill) {
			gi.cprintf(ent, PRINT_HIGH, "You can't talk for %d more seconds\n",
				(int)(cl->flood_locktill - level.time));
            return;
        }
        i = cl->flood_whenhead - flood_msgs->value + 1;
        if (i < 0)
            i = (sizeof(cl->flood_when)/sizeof(cl->flood_when[0])) + i;
		if (cl->flood_when[i] && 
			level.time - cl->flood_when[i] < flood_persecond->value) {
			cl->flood_locktill = level.time + flood_waitdelay->value;
			gi.cprintf(ent, PRINT_CHAT, "Flood protection:  You can't talk for %d seconds.\n",
				(int)flood_waitdelay->value);
            return;
        }
		cl->flood_whenhead = (cl->flood_whenhead + 1) %
			(sizeof(cl->flood_when)/sizeof(cl->flood_when[0]));
		cl->flood_when[cl->flood_whenhead] = level.time;
	}

	if (dedicated->value)
		gi.cprintf(NULL, PRINT_CHAT, "%s", text);

	for (j = 1; j <= game.maxclients; j++)
	{
		other = &g_edicts[j];
		if (!other->inuse)
			continue;
		if (!other->client)
			continue;
		if (team)
		{
			if (!OnSameTeam(ent, other))
				continue;
		}
		gi.cprintf(other, PRINT_CHAT, "%s", text);
	}
}

void Cmd_PlayerList_f(edict_t *ent)
{
	int i;
	char st[80];
	char text[1400];
	edict_t *e2;

	// connect time, ping, score, name
	*text = 0;
	for (i = 0, e2 = g_edicts + 1; i < maxclients->value; i++, e2++) {
		if (!e2->inuse)
			continue;

		Com_sprintf(st, sizeof(st), "%02d:%02d %4d %3d %s%s\n",
			(level.framenum - e2->client->resp.enterframe) / 600,
			((level.framenum - e2->client->resp.enterframe) % 600)/10,
			e2->client->ping,
			e2->client->resp.score,
			e2->client->pers.netname,
			e2->client->resp.spectator ? " (spectator)" : "");
		if (strlen(text) + strlen(st) > sizeof(text) - 50) {
			sprintf(text+strlen(text), "And more...\n");
			gi.cprintf(ent, PRINT_HIGH, "%s", text);
			return;
		}
		strcat(text, st);
	}
	gi.cprintf(ent, PRINT_HIGH, "%s", text);
}

/*
=================
Cmd_FireMode_f
MUCE: new function for adjusting firing mode
=================
*/
void Cmd_FireMode_f (edict_t *ent)
       {
       int i;
       i=ent->client->pers.fire_mode;
       switch (i)
               {
               case 0:
                       ent->client->pers.fire_mode=1;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Burst Fire Mode\n");
					   gi.centerprintf(ent,"M16 Burst Fire Mode\n");
                       break;
               case 1:
               default:
                       ent->client->burstfire_count=0;
                       ent->client->pers.fire_mode=0;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Fully Automatic Mode\n");
					   gi.centerprintf(ent,"M16 Full Automatic Mode\n");
                       break;
               }
       }
void Cmd_Regen_f (edict_t *ent)
       {
       int i;
       i=ent->client->pers.regen;
       switch (i)
               {
               case 0:
                       ent->client->pers.regen=1;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Burst Fire Mode\n");
					   gi.centerprintf(ent,"Rapid Health Regen ON\n");
					   perksOn++;
                       break;
               case 1:
               default:
                       //ent->client->burstfire_count=0;
                       ent->client->pers.regen=0;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Fully Automatic Mode\n");
					   gi.centerprintf(ent,"Rapid Health Regen OFF\n");
					   perksOn--;
                       break;
               }
       }

void Cmd_SuperSpeed_f (edict_t *ent)
       {
       int i;
       i=ent->client->pers.speed;
       switch (i)
               {
               case 0:
                       ent->client->pers.speed=1;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Burst Fire Mode\n");
					   gi.centerprintf(ent,"Super Speed\n");
					   perksOn++;
                       break;
               case 1:
               default:
                       //ent->client->burstfire_count=0;
                       ent->client->pers.speed=0;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Fully Automatic Mode\n");
					   gi.centerprintf(ent,"Normal Speed\n");
					   perksOn--;
                       break;
               }
       }

void Cmd_InstaKill_f (edict_t *ent)
       {
       int i;
       i=ent->client->pers.instakill;
       switch (i)
               {
               case 0:
                       ent->client->pers.instakill=1;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Burst Fire Mode\n");
					   gi.centerprintf(ent,"INSTA KILL ON\n");
					   perksOn++;
                       break;
               case 1:
               default:
                       //ent->client->burstfire_count=0;
                       ent->client->pers.instakill=0;
                       //gi.cprintf(ent,PRINT_HIGH,"M16 Fully Automatic Mode\n");
					   gi.centerprintf(ent,"INSTA KILL OFF\n");
					   perksOn--;
                       break;
               }
       }
/*

=================
Cmd_Thrust_f

MUCE:
To set jetpack on or off
=================
*/
void Cmd_Thrust_f (edict_t *ent)
{
	char    *string;

	string=gi.args();

	if (Q_stricmp ( string, "on") == 0)
	{
		ent->client->thrusting=1;
		ent->client->next_thrust_sound=0;
		perksOn++;
	}
	else
	{
 		ent->client->thrusting=0;
		perksOn--;
	}
}


/*
=================
ClientCommand
=================
*/
void ClientCommand (edict_t *ent)
{
	char	*cmd;

	if (!ent->client)
		return;		// not fully in game yet

	cmd = gi.argv(0);

	if (Q_stricmp (cmd, "players") == 0)
	{
		Cmd_Players_f (ent);
		return;
	}
	if (Q_stricmp (cmd, "say") == 0)
	{
		Cmd_Say_f (ent, false, false);
		return;
	}
	if (Q_stricmp (cmd, "say_team") == 0)
	{
		Cmd_Say_f (ent, true, false);
		return;
	}
	if (Q_stricmp (cmd, "score") == 0)
	{
		Cmd_Score_f (ent);
		return;
	}
	if (Q_stricmp (cmd, "help") == 0)
	{
		Cmd_Help_f (ent);
		return;
	}

	if (level.intermissiontime)
		return;

	if (Q_stricmp (cmd, "use") == 0)
		Cmd_Use_f (ent);
	else if (Q_stricmp (cmd, "drop") == 0)
		Cmd_Drop_f (ent);
	else if (Q_stricmp (cmd, "give") == 0)
		Cmd_Give_f (ent);
	else if (Q_stricmp (cmd, "god") == 0)
		Cmd_God_f (ent);
	else if (Q_stricmp (cmd, "notarget") == 0)
		Cmd_Notarget_f (ent);
	else if (Q_stricmp (cmd, "noclip") == 0)
		Cmd_Noclip_f (ent);
	else if (Q_stricmp (cmd, "inven") == 0)
		Cmd_Inven_f (ent);
	else if (Q_stricmp (cmd, "invnext") == 0)
		SelectNextItem (ent, -1);
	else if (Q_stricmp (cmd, "invprev") == 0)
		SelectPrevItem (ent, -1);
	else if (Q_stricmp (cmd, "invnextw") == 0)
		SelectNextItem (ent, IT_WEAPON);
	else if (Q_stricmp (cmd, "invprevw") == 0)
		SelectPrevItem (ent, IT_WEAPON);
	else if (Q_stricmp (cmd, "invnextp") == 0)
		SelectNextItem (ent, IT_POWERUP);
	else if (Q_stricmp (cmd, "invprevp") == 0)
		SelectPrevItem (ent, IT_POWERUP);
	else if (Q_stricmp (cmd, "invuse") == 0)
		Cmd_InvUse_f (ent);
	else if (Q_stricmp (cmd, "invdrop") == 0)
		Cmd_InvDrop_f (ent);
	else if (Q_stricmp (cmd, "weapprev") == 0)
		Cmd_WeapPrev_f (ent);
	else if (Q_stricmp (cmd, "weapnext") == 0)
		Cmd_WeapNext_f (ent);
	else if (Q_stricmp (cmd, "weaplast") == 0)
		Cmd_WeapLast_f (ent);
	else if (Q_stricmp (cmd, "kill") == 0)
		Cmd_Kill_f (ent);
	else if (Q_stricmp (cmd, "putaway") == 0)
		Cmd_PutAway_f (ent);
	else if (Q_stricmp (cmd, "wave") == 0)
		Cmd_Wave_f (ent);
	else if (Q_stricmp (cmd, "superspeed") == 0)
		Cmd_SuperSpeed_f (ent);
	else if (Q_stricmp (cmd, "instakill") == 0)
		Cmd_InstaKill_f (ent);
	else if (Q_stricmp (cmd, "regen") == 0)
		Cmd_Regen_f (ent);
	else if (Q_stricmp (cmd, "wave1") == 0)
	{
		WaveSpawn1();
		gi.centerprintf(ent,"ZOMBIES SPAWNED!");
	}
	else if (Q_stricmp (cmd, "wave2") == 0)
	{
		WaveSpawn2();
		gi.centerprintf(ent,"ZOMBIES SPAWNED!");
	}
	else if (Q_stricmp (cmd, "wave3") == 0)
	{
		WaveSpawn3();
		gi.centerprintf(ent,"ZOMBIES SPAWNED!");
	}
	/*else if (Q_stricmp (cmd, "superspeed off") == 0)
		ent->ClassSpeed = 5;*/
	else if (Q_stricmp (cmd, "boots") == 0)
        {
               if (ent->flags & FL_BOOTS)
               {
                       gi.centerprintf (ent, "Super jump deactivated\n");
                       ent->flags -= FL_BOOTS;
					   perksOn--;
               }
               else
               {
                       gi.centerprintf (ent, "Super jump activated\n");
                       ent->flags |= FL_BOOTS;
					   perksOn++;
               }
        }
    else if (Q_stricmp (cmd, "firemode") == 0)
        Cmd_FireMode_f (ent);
	else if (Q_stricmp(cmd, "playerlist") == 0)
		Cmd_PlayerList_f(ent);
	else if (Q_stricmp(cmd, "thrust") == 0 )
		Cmd_Thrust_f (ent);
	else if (Q_stricmp (cmd, "zoom") == 0)
	{
		int zoomtype=atoi(gi.argv(1));
		if (zoomtype==0)
		{
			ent->client->ps.fov = 90;
		}
		else if (zoomtype==1)
		{
			if (ent->client->ps.fov == 90) ent->client->ps.fov = 40;
			else if (ent->client->ps.fov == 40) ent->client->ps.fov = 20;
			else if (ent->client->ps.fov == 20) ent->client->ps.fov = 10;
			else ent->client->ps.fov = 90;
		}
	}
	else	// anything that doesn't match a command will be a chat
		Cmd_Say_f (ent, false, true);
}
