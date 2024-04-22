#ifndef SYS_OH_H
#define SYS_OH_H

void ohUpdateDefault(GObj* arg0);
void ohWait(s32 numFrames);
GObj* ohCreateCamera(s32 objId, void (*objFnUpdate)(GObj*), s32 objLink, s32 objPriority,
                  void (*fnRender)(GObj*), s32 dlPriority, s32 dlLinkBitMask, s32 cameraTag, s32 defaultMatrices,
                  u8 procKind, void (*procFunc)(GObj*), s32 procPriority, s32 defaultFlags);
GObj* ohApplyByLinkEx(s32 link, GObj* (*cb)(GObj*, void*), void* param, s32 getFirst);
void ohPauseObjectProcesses(s32);
void ohResumeObjectProcesses(s32);
void ohRemoveSprite(GObj*);
void ohRemoveDObj(GObj*);
void ohEndAllObjectProcesses(GObj*);
void ohDeleteAllObjects(void);

#endif /* SYS_OH_H */
