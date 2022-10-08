// I saw this at 3 AM and figured I had to waste 10 minutes making it uncomfortably sus!


/*
// GameParamsScript
// Token: 0x06001E3E RID: 7742 RVA: 0x0000206A File Offset: 0x0000026A
[Token(Token = "0x6001E3E")]
[Address(RVA = "0x10B8AE8", Offset = "0x10B8AE8", VA = "0x10B8AE8")]
public int[] get_playerClothes()
{
	return null;
}
*/

int[] (*old_getplayerClothes)(void *instance);
int[] getplayerClothes(void *instance) {
    if(instance!=NULL) {
		if (isNoClothes) {
            return NULL
		}
	}
	return old_getplayerClothes(instance);	
}

MSHookFunction((void*)getRealOffset(0x10B8AE8), getplayerClothes, (void**)&old_getplayerClothes);