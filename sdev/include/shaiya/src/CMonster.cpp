#include "include/shaiya/include/CMonster.h"
using namespace shaiya;

D3DXMATRIX* CMonster::GetBoneMatrix(CMonster* mob, int bone)
{
    typedef D3DXMATRIX* (__thiscall* LPFN)(CMonster*, int);
    return (*(LPFN)0x439220)(mob, bone);
}