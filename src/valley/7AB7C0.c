#include "valley.h"

extern s32 D_802D2980_7ABF10;
extern AnimationHeader D_802EC994_7C5F24;
extern AnimationHeader D_802EC9A8_7C5F38;
extern AnimationHeader D_802EC9BC_7C5F4C;
extern InteractionHandler D_802EC9D0_7C5F60[];
extern RandomState D_802EC9F0_7C5F80[];
extern Vec3f D_802ECA10_7C5FA0;
extern PokemonInitData D_802ECA30_7C5FC0;

void func_802D237C_7AB90C(GObj*);
void func_802D2428_7AB9B8(GObj*);

void func_802D2230_7AB7C0(GObj* obj) {
    UNUSED s32 pad[3];
    Pokemon* pokemon = GET_POKEMON(obj);

    HIDE_POKEMON();
    pokemon->counter = 1;
    pokemon->processFlags &= ~POKEMON_PROCESS_WAIT_ENDED;
    pokemon->transitionGraph = D_802EC9D0_7C5F60;
    Pokemon_WaitForFlag(obj, POKEMON_PROCESS_WAIT_ENDED);
    Pokemon_RunCleanup(obj);
    Pokemon_SetState(obj, NULL);
}

void func_802D22A0_7AB830(GObj* obj) {
    UNUSED s32 pad[3];
    Pokemon* pokemon = GET_POKEMON(obj);

    SHOW_POKEMON();
    Pokemon_SetStateRandom(obj, D_802EC9F0_7C5F80);
}

void func_802D22D4_7AB864(GObj* obj) {
    Pokemon_ForceAnimation(obj, &D_802EC994_7C5F24);
    Pokemon_SetState(obj, func_802D237C_7AB90C);
}

void func_802D230C_7AB89C(GObj* obj) {
    Pokemon_ForceAnimation(obj, &D_802EC9A8_7C5F38);
    Pokemon_SetState(obj, func_802D237C_7AB90C);
}

void func_802D2344_7AB8D4(GObj* obj) {
    Pokemon_ForceAnimation(obj, &D_802EC9BC_7C5F4C);
    Pokemon_SetState(obj, func_802D237C_7AB90C);
}

void func_802D237C_7AB90C(GObj* obj) {
    UNUSED s32 pad;
    DObj* model = obj->data.dobj;
    Mtx4Float* rotation = &GET_TRANSFORM(model)->rot;
    Pokemon* pokemon = GET_POKEMON(obj);

    rotation->v.y = (randRange(360) * PI) / 180.0f;
    Pokemon_StartPathProc(obj, func_802D2428_7AB9B8);
    pokemon->transitionGraph = NULL;
    Pokemon_WaitForFlag(obj, 1);
    D_802D2980_7ABF10 = 0;
    Pokemon_RunCleanup(obj);
    Pokemon_SetState(obj, NULL);
}

void func_802D2428_7AB9B8(GObj* obj) {
    DObj* model = obj->data.dobj;
    f32 sp50;
    DObj* temp_s1;
    Pokemon* pokemon = GET_POKEMON(obj);
    Vec3f sp4C;
    Vec3f sp40;
    UNUSED s32 pad[1];
    GroundResult sp28;

    sp40 = D_802ECA10_7C5FA0;
    temp_s1 = model->firstChild->firstChild->next;
    ohWait(60);

    while (true) {
        func_800A5E98(&sp4C, &sp40, temp_s1);
        getGroundAt(sp4C.x, sp4C.z, &sp28);
        if (!(sp4C.y < sp28.height)) {
            ohWait(1);
        } else {
            break;
        }
    }
    sp4C.y = sp28.height;
    if ((sp28.surfaceType == SURFACE_TYPE_337FB2) || (sp28.surfaceType == SURFACE_TYPE_007F66)) {
        func_8035E174_4FE584(obj, &sp4C);
    }
    pokemon->pathProc = NULL;
    pokemon->processFlags |= 2;
    omEndProcess(NULL);
}

void func_802D2540_7ABAD0(s32 gObjID, u16 id, WorldBlock* roomA, WorldBlock* roomB, ObjectSpawn* spawn) {
    Pokemon_SpawnOnGround(gObjID, id, roomA, roomB, spawn, &D_802ECA30_7C5FC0);
}
