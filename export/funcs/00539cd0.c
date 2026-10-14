
void __thiscall FUN_00539cd0(int *param_1,float *param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  Root *pRVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  
  fVar7 = param_2[2];
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar6 = (float10)(**(code **)(*param_4 + 0x30))();
  fVar9 = (float)fVar6;
  fVar6 = (float10)(**(code **)(*param_1 + 0x30))();
  fVar7 = Collision::CalcCollisionDamage
                    (SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar2 * fVar2),(float)fVar6,fVar9);
  if (((CObject *)param_1[4] != (CObject *)0x0) &&
     (pRVar3 = CObject::get_archetype((CObject *)param_1[4]), pRVar3 != (Root *)0x0)) {
    CObject::get_archetype((CObject *)param_1[4]);
  }
  uVar4 = FUN_00407450(fVar7);
  uVar10 = 0;
  pfVar8 = param_2 + 3;
  uVar5 = (**(code **)(*param_4 + 0x20))(uVar4,param_2,pfVar8,0);
  FUN_00539f90(uVar5,uVar4,param_2,pfVar8,uVar10);
  return;
}

