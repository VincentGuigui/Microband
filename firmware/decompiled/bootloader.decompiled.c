/*
 * Ghidra decompiler output for bootloader.bin
 * Image base: 00000000
 * Functions: 268
 *
 * THIS IS DECOMPILER PSEUDOCODE, NOT ORIGINAL SOURCE. It does not compile
 * as-is and is not a reconstruction of the vendor's source code.
 */

/* ---- FUN_1fff03b4 @ 1fff03b4 ---- */

undefined4 FUN_1fff03b4(ushort *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (param_2 != 100) {
    if (param_2 == 0x78) {
      uVar1 = *param_3;
      if ((int)((uint)*param_1 << 0x14) < 0) {
        iVar3 = DAT_1fff7a68 + 0x1fff7a2e;
      }
      else {
        iVar3 = DAT_1fff7a68 + 0x1fff7a42;
      }
      iVar2 = 0;
      for (; uVar1 != 0; uVar1 = uVar1 >> 4) {
        *(byte *)((int)param_1 + iVar2 + 0x24) = *(byte *)(iVar3 + (uVar1 & 0xf));
        iVar2 = iVar2 + 1;
      }
      uVar4 = 0;
      if (((int)((uint)(byte)*param_1 << 0x1c) < 0) && (iVar2 != 0)) {
        uVar4 = 2;
        iVar3 = iVar3 + 0x11;
      }
      uVar4 = FUN_1fff7da8(param_1,iVar2,iVar3,uVar4);
      return uVar4;
    }
    if (param_2 != 99) {
      return 0;
    }
    *(byte *)(param_1 + 0x12) = (byte)*param_3;
    *(byte *)((int)param_1 + 0x25) = 0;
    if (*(int *)(param_1 + 10) == 0) {
      FUN_1fff794a(param_1,param_1 + 0x12,1);
    }
    return 1;
  }
  uVar4 = 0;
  uVar1 = *param_3;
  puVar5 = (undefined *)0x1fff7a04;
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
    puVar5 = &DAT_1fff7a08;
  }
  else if (*(int *)param_1 << 0x1e < 0) {
    puVar5 = (undefined *)0x1fff7a0c;
  }
  else {
    if (-1 < *(int *)param_1 << 0x1d) goto LAB_1fff79d4;
    puVar5 = (undefined *)0x1fff7a10;
  }
  uVar4 = 1;
LAB_1fff79d4:
  iVar3 = 0;
  for (; uVar1 != 0; uVar1 = uVar1 / 10) {
    *(byte *)((int)param_1 + iVar3 + 0x24) = (char)uVar1 + (char)(uVar1 / 10) * -10 + 0x30;
    iVar3 = iVar3 + 1;
  }
  uVar4 = FUN_1fff7da8(param_1,iVar3,puVar5,uVar4);
  return uVar4;
}



/* ---- FUN_1fff0538 @ 1fff0538 ---- */

undefined1 FUN_1fff0538(void)

{
  undefined1 uVar1;
  undefined1 auStack_20 [5];
  char cStack_1b;
  char cStack_1a;
  
  FUN_1fff4b6e(auStack_20,0,0x15);
  FUN_1fff2886(3,1,auStack_20,0);
  if ((cStack_1b != '\x01') || (uVar1 = 1, cStack_1a != '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- entry_point @ 1fff054c ---- */

undefined1 entry_point(void)

{
  undefined1 uVar1;
  undefined4 in_stack_00000004;
  
  FUN_1fff2886(3);
  if ((in_stack_00000004._1_1_ != '\x01') || (uVar1 = 1, in_stack_00000004._2_1_ != '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_1fff0568 @ 1fff0568 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1fff0568(void)

{
  return _DAT_00003000;
}



/* ---- FUN_1fff0570 @ 1fff0570 ---- */

undefined4 FUN_1fff0570(void)

{
  int iVar1;
  undefined1 auStack_20 [5];
  undefined4 local_1b;
  
  iVar1 = FUN_1fff2886(3,2,auStack_20,0);
  if (iVar1 < 0) {
    local_1b = 0;
  }
  return local_1b;
}



/* ---- FUN_1fff058e @ 1fff058e ---- */

void FUN_1fff058e(undefined4 param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_1fff28bc(1,2,&uStack_8,4);
  FUN_1fff28bc(2,2,&uStack_8,4);
  FUN_1fff28bc(3,2,&uStack_8,4);
  return;
}



/* ---- FUN_1fff05b6 @ 1fff05b6 ---- */

void FUN_1fff05b6(undefined4 param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_1fff28bc(3,3,&uStack_8,4);
  return;
}



/* ---- FUN_1fff05c6 @ 1fff05c6 ---- */

void FUN_1fff05c6(void)

{
  FUN_1fff0db6();
  FUN_1fff0cf2(DAT_1fff0670,0xffff);
  FUN_1fff49ba(DAT_1fff067c,DAT_1fff0678,0,DAT_1fff0674);
  return;
}



/* ---- FUN_1fff0684 @ 1fff0684 ---- */

undefined4 FUN_1fff0684(void)

{
  return 0;
}



/* ---- FUN_1fff0688 @ 1fff0688 ---- */

undefined4 FUN_1fff0688(void)

{
  return 0;
}



/* ---- FUN_1fff068c @ 1fff068c ---- */

undefined4 FUN_1fff068c(void)

{
  return 0;
}



/* ---- FUN_1fff06a0 @ 1fff06a0 ---- */

undefined4 FUN_1fff06a0(void)

{
  return 0;
}



/* ---- FUN_1fff06a4 @ 1fff06a4 ---- */

undefined4 FUN_1fff06a4(void)

{
  return 0;
}



/* ---- FUN_1fff06ac @ 1fff06ac ---- */

undefined4 FUN_1fff06ac(void)

{
  return 0;
}



/* ---- FUN_1fff06da @ 1fff06da ---- */

undefined4 FUN_1fff06da(void)

{
  return 0;
}



/* ---- FUN_1fff06de @ 1fff06de ---- */

undefined4 FUN_1fff06de(void)

{
  return 0;
}



/* ---- FUN_1fff06e2 @ 1fff06e2 ---- */

undefined4 FUN_1fff06e2(void)

{
  return 0;
}



/* ---- FUN_1fff06e6 @ 1fff06e6 ---- */

undefined4 FUN_1fff06e6(void)

{
  return 0;
}



/* ---- FUN_1fff06f2 @ 1fff06f2 ---- */

undefined4 FUN_1fff06f2(void)

{
  return 0;
}



/* ---- FUN_1fff0702 @ 1fff0702 ---- */

void FUN_1fff0702(void)

{
  return;
}



/* ---- FUN_1fff0704 @ 1fff0704 ---- */

void FUN_1fff0704(void)

{
  return;
}



/* ---- FUN_1fff0708 @ 1fff0708 ---- */

void FUN_1fff0708(void)

{
  return;
}



/* ---- FUN_1fff070a @ 1fff070a ---- */

void FUN_1fff070a(void)

{
  return;
}



/* ---- FUN_1fff070c @ 1fff070c ---- */

undefined4 FUN_1fff070c(void)

{
  return 0;
}



/* ---- FUN_1fff073e @ 1fff073e ---- */

undefined4 FUN_1fff073e(void)

{
  return 0;
}



/* ---- FUN_1fff0742 @ 1fff0742 ---- */

void FUN_1fff0742(void)

{
  return;
}



/* ---- FUN_1fff074c @ 1fff074c ---- */

undefined4 FUN_1fff074c(void)

{
  return 0;
}



/* ---- FUN_1fff0750 @ 1fff0750 ---- */

undefined4 FUN_1fff0750(void)

{
  return 0;
}



/* ---- FUN_1fff0754 @ 1fff0754 ---- */

undefined4 FUN_1fff0754(void)

{
  return 1;
}



/* ---- FUN_1fff0794 @ 1fff0794 ---- */

undefined4 FUN_1fff0794(undefined4 param_1)

{
  *DAT_1fff090c = param_1;
  return 0;
}



/* ---- FUN_1fff079c @ 1fff079c ---- */

void FUN_1fff079c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_1fff0910;
  *PTR_DAT_1fff0910 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  uVar2 = FUN_1fff5942();
  FUN_1fff49ba(uVar2,*DAT_1fff090c,PTR_DAT_1fff0910,1);
  return;
}



/* ---- FUN_1fff07bc @ 1fff07bc ---- */

void FUN_1fff07bc(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_1fff0910;
  if (param_1 != 0) {
    *PTR_DAT_1fff0910 = 0;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 4);
    *(uint *)(puVar1 + 8) = (uint)*(byte *)(param_1 + 8);
    uVar2 = FUN_1fff5942(0);
    FUN_1fff49ba(uVar2,*DAT_1fff090c,PTR_DAT_1fff0910,1);
    return;
  }
  return;
}



/* ---- FUN_1fff08ec @ 1fff08ec ---- */

uint FUN_1fff08ec(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  
  uVar3 = FUN_1fff3eea(0,3);
  uVar1 = DAT_1fff0920;
  if (uVar3 == 0) {
    uVar3 = FUN_1fff4210(0,DAT_1fff0920,param_1,extraout_r3,unaff_r4);
    puVar2 = DAT_1fff34f0;
    *(undefined4 *)(DAT_1fff34f0 + 2) = uVar1;
    if (uVar3 == 0) {
      uVar4 = FUN_1fff400e(0,0x10,DAT_1fff34f4);
      uVar5 = FUN_1fff400e(0,0x12,DAT_1fff34f8);
      uVar6 = FUN_1fff400e(0,0x14,DAT_1fff34fc);
      uVar7 = FUN_1fff400e(0,0x13,DAT_1fff3500);
      uVar8 = FUN_1fff400e(0,0x17,DAT_1fff3504);
      uVar3 = FUN_1fff400e(0,0x16,DAT_1fff3508);
      uVar3 = uVar3 | uVar8 | uVar4 | uVar5 | uVar6 | uVar7;
      FUN_1fff3fa4(0,1,3);
      *puVar2 = 3;
    }
    return uVar3;
  }
  return uVar3;
}



/* ---- FUN_1fff09b4 @ 1fff09b4 ---- */

undefined4 FUN_1fff09b4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 == 0x81) || (param_1 == 2)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* ---- FUN_1fff0ac0 @ 1fff0ac0 ---- */

void FUN_1fff0ac0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_1fff615e(0x2b,4);
  FUN_1fff6078((param_1 >> 0x10) << 0x18 | (param_1 >> 0x18) << 0x10 | (param_1 & 0xff) << 8 |
               param_1 >> 8 & 0xff);
  FUN_1fff6078((param_3 >> 0x10) << 0x18 | (param_3 >> 0x18) << 0x10 | (param_3 & 0xff) << 8 |
               param_3 >> 8 & 0xff);
  FUN_1fff615e(0x2a,4);
  FUN_1fff6078((param_2 >> 0x10) << 0x18 | (param_2 >> 0x18) << 0x10 | (param_2 & 0xff) << 8 |
               param_2 >> 8 & 0xff);
  FUN_1fff6078((param_4 >> 0x10) << 0x18 | (param_4 >> 0x18) << 0x10 | (param_4 & 0xff) << 8 |
               param_4 >> 8 & 0xff);
  return;
}



/* ---- vector_core_0 @ 1fff0ad0 ---- */

void vector_core_0(void)

{
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  
  FUN_1fff615e();
  FUN_1fff6078((unaff_r4 >> 0x10) << 0x18 | (unaff_r4 >> 0x18) << 0x10 | (unaff_r4 & 0xff) << 8 |
               unaff_r4 >> 8 & 0xff);
  FUN_1fff6078((unaff_r7 >> 0x10) << 0x18 | (unaff_r7 >> 0x18) << 0x10 | (unaff_r7 & 0xff) << 8 |
               unaff_r7 >> 8 & 0xff);
  FUN_1fff615e(0x2a,4);
  FUN_1fff6078((unaff_r6 >> 0x10) << 0x18 | (unaff_r6 >> 0x18) << 0x10 | (unaff_r6 & 0xff) << 8 |
               unaff_r6 >> 8 & 0xff);
  FUN_1fff6078((unaff_r5 >> 0x10) << 0x18 | (unaff_r5 >> 0x18) << 0x10 | (unaff_r5 & 0xff) << 8 |
               unaff_r5 >> 8 & 0xff);
  return;
}



/* ---- vector_core_3 @ 1fff0ad4 ---- */

void vector_core_3(void)

{
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  
  FUN_1fff6078((unaff_r4 >> 0x10) << 0x18 | (unaff_r4 >> 0x18) << 0x10 | (unaff_r4 & 0xff) << 8 |
               unaff_r4 >> 8 & 0xff);
  FUN_1fff6078((unaff_r7 >> 0x10) << 0x18 | (unaff_r7 >> 0x18) << 0x10 | (unaff_r7 & 0xff) << 8 |
               unaff_r7 >> 8 & 0xff);
  FUN_1fff615e(0x2a,4);
  FUN_1fff6078((unaff_r6 >> 0x10) << 0x18 | (unaff_r6 >> 0x18) << 0x10 | (unaff_r6 & 0xff) << 8 |
               unaff_r6 >> 8 & 0xff);
  FUN_1fff6078((unaff_r5 >> 0x10) << 0x18 | (unaff_r5 >> 0x18) << 0x10 | (unaff_r5 & 0xff) << 8 |
               unaff_r5 >> 8 & 0xff);
  return;
}



/* ---- vector_core_1 @ 1fff0ad6 ---- */

void vector_core_1(void)

{
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  
  FUN_1fff6078();
  FUN_1fff6078((unaff_r7 >> 0x10) << 0x18 | (unaff_r7 >> 0x18) << 0x10 | (unaff_r7 & 0xff) << 8 |
               unaff_r7 >> 8 & 0xff);
  FUN_1fff615e(0x2a,4);
  FUN_1fff6078((unaff_r6 >> 0x10) << 0x18 | (unaff_r6 >> 0x18) << 0x10 | (unaff_r6 & 0xff) << 8 |
               unaff_r6 >> 8 & 0xff);
  FUN_1fff6078((unaff_r5 >> 0x10) << 0x18 | (unaff_r5 >> 0x18) << 0x10 | (unaff_r5 & 0xff) << 8 |
               unaff_r5 >> 8 & 0xff);
  return;
}



/* ---- FUN_1fff0af8 @ 1fff0af8 ---- */

void FUN_1fff0af8(undefined4 param_1)

{
  FUN_1fff615e(0x53,1);
  FUN_1fff6078(0x20);
  FUN_1fff615e(0x51,1);
  FUN_1fff6078(param_1);
  return;
}



/* ---- FUN_1fff0b1c @ 1fff0b1c ---- */

void FUN_1fff0b1c(uint param_1)

{
  uint uVar1;
  
  FUN_1fff0ac0(0,0,0x13f,0x7f);
  FUN_1fff615e(0x2c,0xa000);
  uVar1 = 0;
  do {
    FUN_1fff6078((param_1 >> 0x10) << 0x18 | (param_1 >> 0x18) << 0x10 | (param_1 & 0xff) << 8 |
                 param_1 >> 8 & 0xff);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xa000);
  return;
}



/* ---- FUN_1fff0b7c @ 1fff0b7c ---- */

void FUN_1fff0b7c(void)

{
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_14 = &DAT_a0000000;
  local_18 = 3;
  local_10 = 0x80000;
  local_c = 0x1a;
  local_a = 0x2e;
  local_6 = 0;
  local_8 = 0x1e;
  FUN_1fff6190(&local_18);
  return;
}



/* ---- FUN_1fff0bb0 @ 1fff0bb0 ---- */

void FUN_1fff0bb0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_1fff0b7c();
  FUN_1fff1cba(0x90,1);
  FUN_1fff1d82(0x90,0x10,0);
  FUN_1fff1cba(0x10,0);
  FUN_1fff1d82(0x10,0x10,0);
  FUN_1fff1cba(0x30,1);
  FUN_1fff4c6a(200);
  iVar1 = DAT_1fff0df4;
  *(uint *)(DAT_1fff0df4 + 4) = *(uint *)(DAT_1fff0df4 + 4) & 0xffffff1f;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x40;
  FUN_1fff1d26(0x43,5);
  FUN_1fff1d82(0x43,0x10,0);
  FUN_1fff4c6a(200);
  FUN_1fff1cba(0x85,0);
  FUN_1fff4c6a(200);
  FUN_1fff1cba(0x85,1);
  FUN_1fff4c6a(10000);
  FUN_1fff60d4();
  FUN_1fff4c6a(10000);
  FUN_1fff1f26(0x10,0);
  FUN_1fff4c6a(2000);
  FUN_1fff1f26(0x10,1);
  FUN_1fff4c6a(2000);
  FUN_1fff615e(0x30,4);
  FUN_1fff6078(0);
  FUN_1fff6078(0x4001);
  FUN_1fff615e(0x12,0);
  FUN_1fff615e(0x11,0);
  uVar2 = DAT_1fff0df8;
  FUN_1fff4c6a(DAT_1fff0df8);
  FUN_1fff615e(0x34,0);
  FUN_1fff615e(0x3a,1);
  FUN_1fff6078(5);
  FUN_1fff0af8(0);
  FUN_1fff0dd4(0x40);
  FUN_1fff615e(0x29,0);
  FUN_1fff615e(0x20,0);
  FUN_1fff4c6a(uVar2);
  FUN_1fff0ac0(0,0,0x13f,0x7f);
  FUN_1fff615e(0x2c,0x14000);
  uVar3 = 0;
  do {
    FUN_1fff6078(0);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x14000);
  return;
}



/* ---- FUN_1fff0cf2 @ 1fff0cf2 ---- */

void FUN_1fff0cf2(undefined1 *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = CONCAT11(*param_1,param_1[1]);
  pbVar1 = param_1 + 6;
  uVar4 = CONCAT11(param_1[2],param_1[3]);
  sVar5 = 0xa0 - (uVar3 >> 1);
  sVar6 = 0x40 - (uVar4 >> 1);
  FUN_1fff0ac0(sVar5,sVar6,sVar5 + uVar3 + -1,sVar6 + uVar4 + -1,param_1);
  FUN_1fff615e(0x2c,(uint)(ushort)(uVar4 * uVar3) << 1);
  for (uVar8 = 0; uVar8 < (ushort)(uVar4 * uVar3); uVar8 = uVar8 + uVar9 & 0xffff) {
    uVar2 = (int)(param_2 * (((*pbVar1 & 0xf) * 0xff) / 0xf)) / 0xff;
    uVar9 = (uint)(*pbVar1 >> 4);
    for (uVar7 = 0; uVar7 < uVar9; uVar7 = uVar7 + 1 & 0xffff) {
      FUN_1fff6078((uVar2 & 0xff) << 8 | (uVar2 & 0xffff) >> 8);
    }
    pbVar1 = pbVar1 + 1;
  }
  return;
}



/* ---- FUN_1fff0d94 @ 1fff0d94 ---- */

void FUN_1fff0d94(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  FUN_1fff615e(0x2c);
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 2);
    FUN_1fff6078(uVar1 << 8 | uVar1 >> 8);
  }
  return;
}



/* ---- FUN_1fff0db6 @ 1fff0db6 ---- */

void FUN_1fff0db6(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_1fff0dfc;
  uVar2 = *DAT_1fff0dfc;
  if (uVar2 == 0) {
    FUN_1fff0dd4(0x80);
  }
  else {
    FUN_1fff0dd4(0);
  }
  *puVar1 = (uint)(uVar2 == 0);
  return;
}



/* ---- FUN_1fff0dd4 @ 1fff0dd4 ---- */

void FUN_1fff0dd4(uint param_1)

{
  if ((param_1 & 0x27) == 0) {
    FUN_1fff615e(0x36,1);
    FUN_1fff6078(param_1);
    return;
  }
  return;
}



/* ---- FUN_1fff0e00 @ 1fff0e00 ---- */

void FUN_1fff0e00(void)

{
  FUN_1fff7d16(DAT_1fff11f8,DAT_1fff11fc);
  return;
}



/* ---- FUN_1fff0e08 @ 1fff0e08 ---- */

undefined4 FUN_1fff0e08(int param_1)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  undefined4 extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_238 [256];
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  
  puVar1 = DAT_1fff1200;
  local_34 = 0;
  iVar6 = 0;
  uVar7 = *DAT_1fff1200;
  local_28 = param_1;
  local_30 = FUN_1fff30ca();
  uVar4 = 1;
  uVar8 = *puVar1;
  sVar3 = -0x6cb5;
  do {
    if ((1 << (uVar4 & 0xff) & uVar8) != 0) {
      uVar2 = 0x100000;
      do {
        uVar2 = uVar2 >> 1;
        iVar5 = (uVar4 & 0x7ff) * 0x100000 + uVar2;
        local_238[iVar6] = *(undefined2 *)(iVar5 * 2 + -0x5e000000);
        *(short *)(iVar5 * 2 + -0x5e000000) = sVar3;
        sVar3 = sVar3 + 0x102;
        iVar6 = iVar6 + 1;
      } while (uVar2 != 0);
    }
    uVar4 = uVar4 - 1;
  } while (-1 < (int)uVar4);
  sVar3 = -0x6cb5;
  uVar4 = 1;
  do {
    local_38 = 1 << (uVar4 & 0xff);
    if ((local_38 & *DAT_1fff1200) != 0) {
      uVar8 = 0x100000;
      do {
        uVar8 = uVar8 >> 1;
        iVar6 = (uVar4 & 0x7ff) * 0x100000 + uVar8;
        if (*(short *)(iVar6 * 2 + -0x5e000000) != sVar3) {
          uVar7 = uVar7 & ~local_38;
          FUN_1fff068c(0x67);
          FUN_1fff0688(0x68,extraout_r1,iVar6,0);
        }
        sVar3 = sVar3 + 0x102;
      } while (uVar8 != 0);
    }
    uVar4 = uVar4 - 1;
  } while (-1 < (int)uVar4);
  if (local_28 != 0) {
    iVar6 = 0;
    uVar4 = 1;
    uVar8 = *DAT_1fff1200;
    do {
      if ((1 << (uVar4 & 0xff) & uVar8) != 0) {
        uVar2 = 0x100000;
        do {
          uVar2 = uVar2 >> 1;
          *(undefined2 *)(((uVar4 & 0x7ff) * 0x100000 + uVar2) * 2 + -0x5e000000) = local_238[iVar6]
          ;
          iVar6 = iVar6 + 1;
        } while (uVar2 != 0);
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  puVar1 = DAT_1fff1200;
  *DAT_1fff1200 = uVar7;
  FUN_1fff30ca(local_30);
  iVar6 = 0;
  local_30 = FUN_1fff30ca(0);
  local_38 = *puVar1;
  uVar4 = 1;
  do {
    if ((1 << (uVar4 & 0xff) & local_38) != 0) {
      uVar8 = 0x100000;
      do {
        uVar8 = uVar8 >> 1;
        iVar5 = (uVar4 & 0x7ff) * 0x100000 + uVar8;
        local_238[iVar6] = *(undefined2 *)(iVar5 * 2 + -0x5e000000);
        local_238[iVar6 + 1] = *(undefined2 *)(iVar5 * 2 + -0x5e000004);
        *(undefined2 *)(iVar5 * 2 + -0x5e000000) = 0x5555;
        *(undefined2 *)(iVar5 * 2 + -0x5e000004) = 0xaaaa;
        iVar6 = iVar6 + 2;
      } while (0xf < uVar8);
    }
    uVar4 = uVar4 - 1;
  } while (-1 < (int)uVar4);
  uVar4 = 1;
  local_38 = 0xffffaaaa;
  do {
    uVar8 = 1 << (uVar4 & 0xff);
    if ((uVar8 & *DAT_1fff1200) != 0) {
      uVar2 = 0x100000;
      do {
        uVar2 = uVar2 >> 1;
        iVar6 = (uVar4 & 0x7ff) * 0x100000 + uVar2;
        if ((*(short *)(iVar6 * 2 + -0x5e000000) != 0x5555) &&
           (*(ushort *)(iVar6 * 2 + -0x5e000004) != local_38)) {
          uVar7 = uVar7 & ~uVar8;
          FUN_1fff068c(0x67);
        }
      } while (0xf < uVar2);
    }
    uVar4 = uVar4 - 1;
  } while (-1 < (int)uVar4);
  if (local_28 != 0) {
    iVar6 = 0;
    uVar4 = 1;
    uVar8 = *DAT_1fff1200;
    do {
      if ((1 << (uVar4 & 0xff) & uVar8) != 0) {
        uVar2 = 0x100000;
        do {
          uVar2 = uVar2 >> 1;
          iVar5 = (uVar4 & 0x7ff) * 0x100000 + uVar2;
          *(undefined2 *)(iVar5 * 2 + -0x5e000000) = local_238[iVar6];
          *(undefined2 *)(iVar5 * 2 + -0x5e000004) = local_238[iVar6 + 1];
          iVar6 = iVar6 + 2;
        } while (0xf < uVar2);
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  *DAT_1fff1200 = uVar7;
  FUN_1fff30ca(local_30);
  return local_34;
}



/* ---- FUN_1fff100c @ 1fff100c ---- */

int FUN_1fff100c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_1fff1200;
  if (iVar2 == 0) {
    return DAT_1fff1204 + -1;
  }
  if (iVar2 != 1) {
    iVar1 = 0;
    if (iVar2 == 2) {
      iVar1 = DAT_1fff1204;
    }
    return iVar1;
  }
  return DAT_1fff1204 + 1;
}



/* ---- FUN_1fff102c @ 1fff102c ---- */

int FUN_1fff102c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_38;
  int local_34;
  
  iVar3 = DAT_1fff1208;
  puVar2 = DAT_1fff1200;
  uVar5 = 0;
  *DAT_1fff1200 = 0;
  do {
    FUN_1fff7cb2(&local_38,DAT_1fff1208 + 8,0x14);
    local_38 = *(undefined4 *)(iVar3 + uVar5 * 4);
    local_34 = uVar5 * 0x200000 + -0x5e000000;
    iVar4 = FUN_1fff6190(&local_38);
    if (iVar4 < 0) {
      return iVar4;
    }
    uVar1 = uVar5 & 0xff;
    uVar5 = uVar5 + 1;
    *puVar2 = 1 << uVar1 | *puVar2;
  } while ((int)uVar5 < 2);
  if (param_1 == 0) {
    iVar4 = FUN_1fff100c();
    if (-1 < iVar4) {
      iVar4 = FUN_1fff0e08(0);
    }
    FUN_1fff0e00();
  }
  return iVar4;
}



/* ---- FUN_1fff10a0 @ 1fff10a0 ---- */

undefined4 FUN_1fff10a0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_1fff651e();
  iVar1 = DAT_1fff1208;
  iVar2 = 0;
  do {
    FUN_1fff654a(*(undefined4 *)(iVar1 + iVar2 * 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}



/* ---- FUN_1fff10be @ 1fff10be ---- */

undefined4 FUN_1fff10be(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 local_230 [256];
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  
  puVar1 = DAT_1fff1200;
  iVar8 = 0;
  uVar9 = *DAT_1fff1200;
  uVar2 = FUN_1fff30ca(0);
  uVar6 = 1;
  uVar10 = *puVar1;
  sVar5 = -0x6cb5;
  do {
    if ((1 << (uVar6 & 0xff) & uVar10) != 0) {
      uVar3 = 0x100000;
      do {
        uVar3 = uVar3 >> 1;
        iVar7 = (uVar6 & 0x7ff) * 0x100000 + uVar3;
        local_230[iVar8] = *(undefined2 *)(iVar7 * 2 + -0x5e000000);
        *(short *)(iVar7 * 2 + -0x5e000000) = sVar5;
        sVar5 = sVar5 + 0x102;
        iVar8 = iVar8 + 1;
      } while (uVar3 != 0);
    }
    uVar6 = uVar6 - 1;
  } while (-1 < (int)uVar6);
  sVar5 = -0x6cb5;
  uVar6 = 1;
  do {
    uVar3 = 1 << (uVar6 & 0xff);
    if ((uVar3 & uVar10) != 0) {
      uVar4 = 0x100000;
      do {
        uVar4 = uVar4 >> 1;
        if (*(short *)(((uVar6 & 0x7ff) * 0x100000 + uVar4) * 2 + -0x5e000000) != sVar5) {
          uVar9 = uVar9 & ~uVar3;
        }
        sVar5 = sVar5 + 0x102;
      } while (uVar4 != 0);
    }
    uVar6 = uVar6 - 1;
  } while (-1 < (int)uVar6);
  if (param_1 != 0) {
    iVar8 = 0;
    uVar6 = 1;
    do {
      if ((1 << (uVar6 & 0xff) & uVar10) != 0) {
        uVar3 = 0x100000;
        do {
          uVar3 = uVar3 >> 1;
          *(undefined2 *)(((uVar6 & 0x7ff) * 0x100000 + uVar3) * 2 + -0x5e000000) = local_230[iVar8]
          ;
          iVar8 = iVar8 + 1;
        } while (uVar3 != 0);
      }
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  puVar1 = DAT_1fff1200;
  *DAT_1fff1200 = uVar9;
  FUN_1fff30ca(uVar2);
  if (*puVar1 == 0) {
    FUN_1fff068c(0x67);
    uVar2 = DAT_1fff13cc;
  }
  else {
    uVar6 = 0;
    do {
      local_2c = 1 << (uVar6 >> 0x14 & 0xff);
      uVar9 = 0;
      if ((local_2c & *puVar1) != 0) {
        FUN_1fff4ad8();
        local_30 = FUN_1fff30ca(0);
        do {
          uVar10 = uVar6 + uVar9;
          uVar3 = (uVar10 >> 0x18 ^ uVar10 >> 0x10 ^ uVar10 >> 8 ^ uVar10) & 0xff;
          local_230[uVar9] = *(undefined2 *)(uVar10 * 2 + -0x5e000000);
          *(ushort *)(uVar10 * 2 + -0x5e000000) = (ushort)uVar3 | (ushort)(~uVar3 << 8);
          *(ushort *)(uVar10 * 2 + -0x5e000000) = ~*(ushort *)(uVar10 * 2 + -0x5e000000);
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
        uVar10 = *puVar1;
        uVar9 = 0;
        do {
          uVar4 = uVar6 + uVar9;
          uVar3 = (uVar4 >> 0x18 ^ uVar4 >> 0x10 ^ uVar4 >> 8 ^ uVar4) & 0xff;
          if ((uint)*(ushort *)(uVar4 * 2 + -0x5e000000) != (~(uVar3 | ~uVar3 << 8) & 0xffff)) {
            uVar10 = uVar10 & ~local_2c;
            FUN_1fff068c(0x67);
            FUN_1fff0688(0x68,extraout_r1,uVar4,0);
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
        *puVar1 = uVar10;
        if (param_1 != 0) {
          uVar9 = 0;
          do {
            *(undefined2 *)((uVar6 + uVar9) * 2 + -0x5e000000) = local_230[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0x100);
        }
        FUN_1fff30ca(local_30);
      }
      uVar6 = uVar6 + 0x100;
    } while (uVar6 < 0x200000);
    uVar6 = 0;
    do {
      local_2c = 1 << (uVar6 >> 0x14 & 0xff);
      uVar9 = 0;
      if ((local_2c & *puVar1) != 0) {
        FUN_1fff4ad8();
        local_28 = FUN_1fff30ca(0);
        do {
          local_230[uVar9] = *(undefined2 *)((uVar6 + uVar9) * 2 + -0x5e000000);
          *(undefined2 *)((uVar6 + uVar9) * 2 + -0x5e000000) = 0;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
        uVar9 = 0;
        local_30 = *puVar1;
        do {
          if (*(short *)((uVar6 + uVar9) * 2 + -0x5e000000) != 0) {
            local_30 = *puVar1 & ~local_2c;
            FUN_1fff068c(0x67);
            FUN_1fff0688(0x68,extraout_r1_00,uVar6 + uVar9,0);
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
        *puVar1 = local_30;
        if (param_1 != 0) {
          uVar9 = 0;
          do {
            *(undefined2 *)((uVar6 + uVar9) * 2 + -0x5e000000) = local_230[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0x100);
        }
        FUN_1fff30ca(local_28);
      }
      uVar6 = uVar6 + 0x100;
    } while (uVar6 < 0x200000);
    uVar6 = 0;
    do {
      uVar10 = 1 << (uVar6 >> 0x14 & 0xff);
      uVar9 = 0;
      if ((uVar10 & *DAT_1fff13d0) != 0) {
        FUN_1fff4ad8();
        local_30 = FUN_1fff30ca(0);
        do {
          local_230[uVar9] = *(undefined2 *)((uVar6 + uVar9) * 2 + -0x5e000000);
          *(undefined2 *)((uVar6 + uVar9) * 2 + -0x5e000000) = 0xffff;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
        uVar9 = 0;
        uVar3 = *DAT_1fff13d0;
        do {
          if (*(short *)((uVar6 + uVar9) * 2 + -0x5e000000) != -1) {
            uVar3 = uVar3 & ~uVar10;
            FUN_1fff068c(0x67);
            FUN_1fff0688(0x68,extraout_r1_01,uVar6 + uVar9,0);
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x100);
        *DAT_1fff13d0 = uVar3;
        if (param_1 != 0) {
          uVar9 = 0;
          do {
            *(undefined2 *)((uVar6 + uVar9) * 2 + -0x5e000000) = local_230[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0x100);
        }
        FUN_1fff30ca(local_30);
      }
      uVar6 = uVar6 + 0x100;
    } while (uVar6 < 0x200000);
    uVar2 = FUN_1fff100c();
  }
  return uVar2;
}



/* ---- FUN_1fff1514 @ 1fff1514 ---- */

void FUN_1fff1514(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_30 [8];
  
  iVar2 = DAT_1fff17d0;
  uVar4 = *(uint *)(DAT_1fff17d0 + 4);
  iVar5 = DAT_1fff17d8 + 0xc;
  FUN_1fff7cb2(local_30,DAT_1fff17e8,0x20);
  uVar3 = (uVar4 & 0x1fff) >> 8;
  bVar1 = (byte)((uVar4 << 0x13) >> 0x1b);
  *(byte *)(iVar2 + 0x1a) = bVar1;
  *(byte *)(iVar2 + 0x1e) = bVar1;
  *(byte *)(iVar2 + 0x1f) = bVar1;
  if ((uVar4 & 0xff) == 0) {
    if ((int)(uVar4 << 0xf) < 0) {
      iVar5 = DAT_1fff17d8 + 0xb;
    }
  }
  else {
    iVar2 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
      iVar2 = iVar2 + 1;
    }
    iVar5 = local_30[iVar2];
  }
  (**(code **)(DAT_1fff17d4 + uVar3 * 8))(iVar5,*(undefined4 *)(DAT_1fff17d4 + uVar3 * 8 + 4));
  return;
}



/* ---- FUN_1fff1568 @ 1fff1568 ---- */

/* WARNING: Removing unreachable block (ram,0x1fff1474) */
/* WARNING: Removing unreachable block (ram,0x1fff147e) */
/* WARNING: Removing unreachable block (ram,0x1fff14c6) */
/* WARNING: Removing unreachable block (ram,0x1fff14e2) */
/* WARNING: Removing unreachable block (ram,0x1fff14dc) */
/* WARNING: Removing unreachable block (ram,0x1fff14e6) */
/* WARNING: Removing unreachable block (ram,0x1fff14f4) */
/* WARNING: Removing unreachable block (ram,0x1fff1508) */

undefined4 FUN_1fff1568(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar3 = DAT_1fff17ec;
  *(uint *)(DAT_1fff17ec + 0x3c) = *(uint *)(DAT_1fff17ec + 0x3c) | 2;
  *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) | 2;
  iVar3 = DAT_1fff17d4;
  uVar5 = 0;
  iVar7 = DAT_1fff17d4 + 0x100;
  do {
    *(undefined4 *)(iVar3 + uVar5 * 8) = 0;
    *(undefined4 *)(iVar3 + uVar5 * 8 + 4) = 0;
    *(undefined4 *)(iVar7 + uVar5 * 8) = 0;
    iVar1 = uVar5 * 8;
    uVar5 = uVar5 + 1;
    *(undefined4 *)(iVar7 + iVar1 + 4) = 0;
  } while (uVar5 < 0x20);
  FUN_1fff30e6(0x10,8,0x1fff1515,0);
  puVar2 = DAT_1fff17d0;
  puVar6 = DAT_1fff17d0 + 3;
  *DAT_1fff17d0 = 0x180;
  *puVar6 = 0;
  puVar2[5] = 0;
  puVar2[9] = 0xffff;
  puVar2[0xb] = 0xffff;
  *(undefined1 *)((int)puVar2 + 0x103) = 0xd;
  *(undefined1 *)((int)puVar2 + 0x102) = 0xc1;
  *(undefined1 *)((int)puVar2 + 0x101) = 0xc0;
  *(undefined1 *)(puVar2 + 0x40) = 0xe;
  *(undefined1 *)((int)puVar2 + 0x107) = 199;
  *(undefined1 *)((int)puVar2 + 0x106) = 0xc2;
  *(undefined1 *)((int)puVar2 + 0x105) = 0xc4;
  *(undefined1 *)(puVar2 + 0x41) = 0x89;
  *(undefined1 *)((int)puVar2 + 0x10b) = 0xc3;
  *(undefined1 *)((int)puVar2 + 0x10a) = 200;
  *(undefined1 *)((int)puVar2 + 0x109) = 0xb;
  *(undefined1 *)(puVar2 + 0x42) = 10;
  *(undefined1 *)((int)puVar2 + 0x10f) = 0xc6;
  *(undefined1 *)((int)puVar2 + 0x10e) = 0xc5;
  *(undefined1 *)((int)puVar2 + 0x10d) = 0xc;
  *(undefined1 *)(puVar2 + 0x43) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x113) = 0xcf;
  *(undefined1 *)((int)puVar2 + 0x112) = 0xce;
  *(undefined1 *)((int)puVar2 + 0x111) = 0xcd;
  *(undefined1 *)(puVar2 + 0x44) = 0xcc;
  *(undefined1 *)((int)puVar2 + 0x117) = 0xcb;
  *(undefined1 *)((int)puVar2 + 0x116) = 0xca;
  *(undefined1 *)((int)puVar2 + 0x115) = 0xc9;
  *(undefined1 *)(puVar2 + 0x45) = 200;
  *(undefined1 *)((int)puVar2 + 0x11b) = 199;
  *(undefined1 *)((int)puVar2 + 0x11a) = 0xc6;
  *(undefined1 *)((int)puVar2 + 0x119) = 0xc5;
  *(undefined1 *)(puVar2 + 0x46) = 0xc4;
  *(undefined1 *)((int)puVar2 + 0x11f) = 0xc3;
  *(undefined1 *)((int)puVar2 + 0x11e) = 0xc2;
  *(undefined1 *)((int)puVar2 + 0x11d) = 0xc1;
  *(undefined1 *)(puVar2 + 0x47) = 0xc0;
  if ((DAT_1fff17d0[3] & 0x20) != 0) {
    return DAT_1fff17d8;
  }
  *(undefined1 *)(DAT_1fff17dc + 5) = 0xbd;
  iVar3 = DAT_1fff17e0;
  *(undefined2 *)(DAT_1fff17e0 + 0xbc) = 8;
  *(undefined4 *)(iVar3 + 0xac) = 0;
  *(undefined4 *)(iVar3 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x1fff143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&DAT_1fff1440 + (uint)DAT_1fff1440 * 2))();
  return uVar4;
}



/* ---- FUN_1fff167c @ 1fff167c ---- */

uint FUN_1fff167c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  
  puVar1 = DAT_1fff17d0;
  uVar2 = *DAT_1fff17d0;
  iVar3 = 0;
  do {
    do {
    } while ((int)((uint)*(ushort *)(DAT_1fff17e0 + iVar3 * 0x20 + 0x1c) << 0x19) < 0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (param_1 == 0) {
    *DAT_1fff17d0 = *DAT_1fff17d0 & 0xffffffdf;
  }
  else {
    *DAT_1fff17d0 = *DAT_1fff17d0 | 0x20;
    iVar3 = DAT_1fff17f0;
    uVar5 = 0;
    do {
      if (((puVar1[3] & 1 << (uVar5 & 0xff)) != 0) &&
         (pcVar4 = *(code **)(iVar3 + uVar5 * 8), pcVar4 != (code *)0x0)) {
        (*pcVar4)(0,*(undefined4 *)(iVar3 + uVar5 * 8 + 4));
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x20);
  }
  return uVar2 & 0x20;
}



/* ---- FUN_1fff172c @ 1fff172c ---- */

undefined4 FUN_1fff172c(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_1fff17e4;
  iVar1 = DAT_1fff17d0;
  uVar3 = DAT_1fff17d8;
  if ((*(uint *)(DAT_1fff17d0 + 0xc) & 1 << (param_1 & 0xff)) == 0) {
    if (*(int *)(DAT_1fff17e4 + param_1 * 4) == 0) {
      FUN_1fff30e6(param_1 & 0xf,8,&LAB_1fff13d4_1,param_1);
      *(undefined4 *)(iVar2 + param_1 * 4) = 1;
    }
    *(char *)(iVar1 + 0x19) = (char)param_1;
    uVar3 = 0;
  }
  return uVar3;
}



/* ---- FUN_1fff1766 @ 1fff1766 ---- */

int FUN_1fff1766(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,ushort param_6,
                int param_7,undefined4 param_8)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar3 = DAT_1fff1ba0;
  iVar2 = DAT_1fff1b98;
  if ((param_5 == 2) || (*(char *)(param_1 + DAT_1fff17dc) != '\0')) {
    puVar6 = (uint *)(DAT_1fff17e0 + param_1 * 0x20);
    if ((param_2 & (1 << (*(ushort *)((int)puVar6 + 6) >> 0xb)) - 1U) == 0) {
      iVar4 = DAT_1fff17f4;
      if ((param_4 & (*(ushort *)((int)puVar6 + 6) & 0x7ff) >> 8) == 0) {
        if ((param_3 & (1 << ((*(ushort *)((int)puVar6 + 6) & 0xff) >> 3)) - 1U) == 0) {
          if (((param_4 & *(ushort *)((int)puVar6 + 6) & 7) == 0) &&
             (iVar4 = DAT_1fff1b9c, (*(uint *)(DAT_1fff1b98 + 0xc) & 1 << (param_1 & 0xff)) == 0)) {
            *(int *)(DAT_1fff1ba0 + param_1 * 8) = param_7;
            *(undefined4 *)(iVar3 + param_1 * 8 + 4) = param_8;
            *puVar6 = param_2;
            puVar6[4] = param_3;
            if ((*(ushort *)((int)puVar6 + 6) & 0x7ff) >> 8 < (*(ushort *)((int)puVar6 + 6) & 7)) {
              uVar5 = *(ushort *)((int)puVar6 + 6) & 7;
            }
            else {
              uVar5 = (*(ushort *)((int)puVar6 + 6) & 0x7ff) >> 8;
            }
            uVar1 = (ushort)(param_4 / (uVar5 + 1));
            *(ushort *)((int)puVar6 + 0x16) = uVar1;
            *(ushort *)((int)puVar6 + 0x1e) = uVar1;
            if (param_5 == 1) {
              *(ushort *)((int)puVar6 + 0x16) = uVar1 & 0x1ff | (param_6 & 0x1f) << 9 | 0x8000;
              *(undefined2 *)((int)puVar6 + 0x1e) = *(undefined2 *)((int)puVar6 + 0x16);
            }
            else if (param_5 == 3) {
              param_4 = -param_4;
              uVar5 = 0;
              if ((short)puVar6[1] != 0) {
                uVar5 = param_4;
              }
              puVar6[3] = uVar5;
              if ((short)puVar6[5] == 0) {
                param_4 = 0;
              }
              puVar6[6] = param_4;
            }
            if (param_7 == 0) {
              *(undefined2 *)(puVar6 + 7) = 0;
            }
            *(char *)(iVar2 + 0x1b) = (char)param_1;
            iVar4 = DAT_1fff1ba4;
          }
        }
        else {
          iVar4 = DAT_1fff17f4 + -1;
        }
      }
    }
    else {
      iVar4 = DAT_1fff17d8 + 2;
    }
  }
  else {
    iVar4 = DAT_1fff17d8 + 1;
  }
  return iVar4;
}



/* ---- FUN_1fff1c5e @ 1fff1c5e ---- */

undefined4 FUN_1fff1c5e(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 >> 5;
  uVar3 = param_1 & 0x1f;
  if (param_1 != 0xff) {
    if (0x9f < param_1) {
      return DAT_1fff1fa8;
    }
    FUN_1fff30ca(0);
    *(uint *)(DAT_1fff1fac + 0x38) = *(uint *)(DAT_1fff1fac + 0x38) | 1 << (uVar2 + 9 & 0xff);
    iVar1 = *(int *)(DAT_1fff1f9c + uVar2 * 4);
    *(uint *)(iVar1 + uVar3 * 4) = *(uint *)(iVar1 + uVar3 * 4) & 0xfffff8ff | 0x100;
    iVar1 = *(int *)(DAT_1fff1f9c + 0x14 + uVar2 * 4);
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & ~(1 << uVar3);
    FUN_1fff30ca();
  }
  return 0;
}



/* ---- FUN_1fff1cba @ 1fff1cba ---- */

undefined4 FUN_1fff1cba(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 >> 5;
  uVar4 = 1 << (param_1 & 0x1f);
  if (param_1 != 0xff) {
    if (0x9f < param_1) {
      return DAT_1fff1fa8;
    }
    FUN_1fff30ca(0);
    iVar1 = DAT_1fff1fac;
    *(uint *)(DAT_1fff1fac + 0x38) = *(uint *)(DAT_1fff1fac + 0x38) | 1 << (uVar5 + 9 & 0xff);
    *(int *)(*(int *)(DAT_1fff1f9c + uVar5 * 4) + (param_1 & 0x1f) * 4) = iVar1 >> 0x16;
    iVar1 = DAT_1fff1f9c + 0x14;
    puVar2 = *(uint **)(iVar1 + uVar5 * 4);
    uVar3 = *puVar2;
    if (param_2 == 0) {
      uVar3 = uVar3 & ~uVar4;
    }
    else {
      uVar3 = uVar3 | uVar4;
    }
    *puVar2 = uVar3;
    iVar1 = *(int *)(iVar1 + uVar5 * 4);
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | uVar4;
    FUN_1fff30ca();
  }
  return 0;
}



/* ---- FUN_1fff1d26 @ 1fff1d26 ---- */

int FUN_1fff1d26(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1fff1f9c + (param_1 >> 5) * 4);
  if (param_1 != 0xff) {
    if (0x9f < param_1) {
      return DAT_1fff1fa8;
    }
    if (7 < param_2) {
      return DAT_1fff1fa8 + 1;
    }
    FUN_1fff30ca(0);
    *(uint *)(DAT_1fff1fac + 0x38) =
         *(uint *)(DAT_1fff1fac + 0x38) | 1 << ((param_1 >> 5) + 9 & 0xff);
    *(uint *)(iVar1 + (param_1 & 0x1f) * 4) =
         *(uint *)(iVar1 + (param_1 & 0x1f) * 4) & 0xfffff8ff | param_2 << 8;
    FUN_1fff30ca();
  }
  return 0;
}



/* ---- FUN_1fff1d82 @ 1fff1d82 ---- */

int FUN_1fff1d82(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(DAT_1fff1f9c + (param_1 >> 5) * 4);
  if (param_1 == 0xff) {
    return 0;
  }
  uVar3 = FUN_1fff30ca(0);
  puVar2 = PTR_DAT_1fff1fa0;
  iVar10 = DAT_1fff1fa8;
  if (0x9f < param_1) goto LAB_1fff1efa;
  switch(param_2 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    uVar5 = 0;
    do {
      if (*(uint *)(PTR_DAT_1fff1fa0 + uVar5 * 0xc) == param_1) {
        *(undefined4 *)(PTR_DAT_1fff1fa0 + uVar5 * 0xc) = 0xff;
        *(undefined4 *)(puVar2 + uVar5 * 0xc + 4) = 0;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    break;
  default:
    iVar10 = DAT_1fff1fb0 + -1;
LAB_1fff1ea4:
    FUN_1fff30ca(uVar3);
    goto LAB_1fff1efa;
  case 9:
  case 10:
  case 0xb:
    uVar5 = 0x20;
    uVar4 = 0;
    do {
      uVar6 = uVar4;
      if (*(uint *)(PTR_DAT_1fff1fa0 + uVar4 * 0xc) == param_1) break;
      if ((*(uint *)(PTR_DAT_1fff1fa0 + uVar4 * 0xc) == 0xff) && (uVar5 == 0x20)) {
        uVar5 = uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar5;
    } while (uVar4 < 0x20);
    if (uVar6 == 0x20) {
      iVar10 = DAT_1fff1fa8 + 2;
      goto LAB_1fff1ea4;
    }
    *(uint *)(PTR_DAT_1fff1fa0 + uVar6 * 0xc) = param_1;
    *(undefined4 *)(puVar2 + uVar6 * 0xc + 4) = param_3;
    *(undefined4 *)(puVar2 + uVar6 * 0xc + 8) = param_4;
  }
  FUN_1fff30ca(uVar3);
  *(uint *)(iVar9 + (param_1 & 0x1f) * 4) =
       (param_2 & 0xf) << 0x10 | *(uint *)(iVar9 + (param_1 & 0x1f) * 4) & 0x700 |
       (param_2 & 0x10) << 2 | param_2 & 0x20 | param_2 >> 2 & 0x10 | param_2 >> 5 & 4 |
       (uint)((int)(param_2 << 0x17) >> 2) >> 0x1e | param_2 >> 8 & 2;
  iVar8 = DAT_1fff1fb0 + 1;
  uVar5 = 1 << (param_1 & 0x1f);
  iVar10 = DAT_1fff1fb0;
  if ((int)(param_2 << 0x15) < 0) {
    if ((*(uint *)(iVar9 + 0xc4) & 1) == 0) {
      if (*(int *)(iVar9 + 0xc0) != 0) goto LAB_1fff1efa;
      *(undefined4 *)(iVar9 + 0xc4) = 1;
      uVar7 = 0x14;
LAB_1fff1edc:
      *(undefined4 *)(iVar9 + 200) = uVar7;
    }
  }
  else {
    if (-1 < (int)(param_2 << 0x14)) {
      *(uint *)(iVar9 + 0xc0) = *(uint *)(iVar9 + 0xc0) & ~uVar5;
      iVar10 = 0;
      goto LAB_1fff1efa;
    }
    if ((*(uint *)(iVar9 + 0xc4) & 1) != 0) {
      if (*(int *)(iVar9 + 0xc0) != 0) goto LAB_1fff1efa;
      *(undefined4 *)(iVar9 + 0xc4) = 0;
      uVar7 = 5;
      goto LAB_1fff1edc;
    }
  }
  puVar1 = (uint *)(iVar9 + 0xc0);
  *puVar1 = *puVar1 | uVar5;
  iVar10 = 0;
  if ((*puVar1 & uVar5) == 0) {
    iVar10 = iVar8;
  }
LAB_1fff1efa:
  FUN_1fff30ca(uVar3);
  return iVar10;
}



/* ---- FUN_1fff1f26 @ 1fff1f26 ---- */

undefined4 FUN_1fff1f26(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0xff) {
    if (0x9f < param_1) {
      return DAT_1fff1fa8;
    }
    iVar2 = 1 << (param_1 & 0x1f);
    iVar1 = *(int *)(DAT_1fff1f9c + 0x14 + (param_1 >> 5) * 4);
    if (param_2 == 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    else {
      *(int *)(iVar1 + 4) = iVar2;
    }
  }
  return 0;
}



/* ---- FUN_1fff1f50 @ 1fff1f50 ---- */

undefined4 FUN_1fff1f50(uint param_1)

{
  if (param_1 != 0xff) {
    if (0x9f < param_1) {
      return DAT_1fff1fa8;
    }
    *(int *)(*(int *)(DAT_1fff1f9c + 0x14 + (param_1 >> 5) * 4) + 4) = 1 << (param_1 & 0x1f);
  }
  return 0;
}



/* ---- FUN_1fff1f76 @ 1fff1f76 ---- */

undefined4 FUN_1fff1f76(uint param_1)

{
  if (param_1 != 0xff) {
    if (0x9f < param_1) {
      return DAT_1fff1fa8;
    }
    *(int *)(*(int *)(DAT_1fff1f9c + 0x14 + (param_1 >> 5) * 4) + 8) = 1 << (param_1 & 0x1f);
  }
  return 0;
}



/* ---- FUN_1fff1fd8 @ 1fff1fd8 ---- */

void FUN_1fff1fd8(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((*(int *)(PTR_DAT_1fff2018 + uVar1 * 0xc) != param_1 ||
         (*(int *)(PTR_DAT_1fff2018 + uVar1 * 0xc + 4) == 0))) {
    uVar1 = uVar1 + 1;
    if (0x1f < uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1fff2002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_1fff2018 + uVar1 * 0xc + 4))
            (*(undefined4 *)(PTR_DAT_1fff2018 + uVar1 * 0xc + 8));
  return;
}



/* ---- FUN_1fff201c @ 1fff201c ---- */

void FUN_1fff201c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    FUN_1fff1d26(0x22,2);
    FUN_1fff1d82(0x22,0x20,0);
    FUN_1fff1d26(0x23,2);
    uVar1 = 0x23;
  }
  else if (param_1 == 1) {
    FUN_1fff1d26(0x81,6);
    FUN_1fff1d82(0x81,0x20,0);
    FUN_1fff1d26(0x80,6);
    uVar1 = 0x80;
  }
  else if (param_1 == 2) {
    FUN_1fff1d26(0xc,5);
    FUN_1fff1d82(0xc,0x20,0);
    FUN_1fff1d26(0xb,5);
    uVar1 = 0xb;
  }
  else {
    if (param_1 != 3) {
      return;
    }
    FUN_1fff1d26(2,4);
    FUN_1fff1d82(2,0x20,0);
    FUN_1fff1d26(1,4);
    uVar1 = 1;
  }
  FUN_1fff1d82(uVar1,0x20,0);
  return;
}



/* ---- FUN_1fff2242 @ 1fff2242 ---- */

void FUN_1fff2242(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = *(int *)(DAT_1fff24c0 + param_1 * 4);
  pcVar7 = *(char **)(DAT_1fff24bc + 0x50 + param_1 * 4);
  if (*pcVar7 == '\0') {
    iVar2 = 2;
  }
  else {
    iVar2 = 3;
  }
  uVar1 = *(ushort *)(pcVar7 + 8);
  FUN_1fff6d62(DAT_1fff24c0 + 0x14 + param_1 * 0x18);
  *(undefined1 *)(iVar6 + 2) = 0;
  FUN_1fff49ba(DAT_1fff24bc + 0x60 + param_1 * 0x28,DAT_1fff24c8,param_1,
               (iVar2 + (uint)uVar1) * 15000);
  iVar2 = DAT_1fff24bc;
  iVar3 = DAT_1fff24bc + param_1 * 0x14;
  *(undefined4 *)(iVar3 + 4) = 0;
  *(undefined1 *)(iVar2 + param_1 * 0x14) = 1;
  *(undefined2 *)(iVar3 + 2) = 0;
  *(char *)(iVar3 + 8) = *pcVar7;
  *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(pcVar7 + 8);
  *(char *)(iVar3 + 9) = pcVar7[1];
  *(char *)(iVar3 + 10) = pcVar7[2];
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(pcVar7 + 4);
  if (pcVar7[3] == '\0') {
    uVar4 = FUN_1fff2c9a();
    uVar5 = DAT_1fff24d8;
  }
  else {
    uVar4 = FUN_1fff2c9a();
    uVar5 = DAT_1fff24d4;
  }
  *(byte *)(iVar6 + 1) = (byte)(uVar4 / uVar5) & 0x3f;
  *(undefined1 *)(iVar6 + 2) = 0x80;
  *(undefined1 *)(iVar6 + 2) = 0x90;
  if ((int)((uint)*(byte *)(iVar6 + 3) << 0x1b) < 0) {
    *(undefined1 *)(iVar6 + 3) = 0x10;
  }
  if ((int)((uint)*(byte *)(iVar6 + 3) << 0x1e) < 0) {
    *(undefined1 *)(iVar6 + 3) = 2;
  }
  *(byte *)(iVar6 + 2) = *(byte *)(iVar6 + 2) | 0x40;
  *(undefined1 *)(iVar6 + 6) = 0x20;
  *(byte *)(iVar6 + 2) = *(byte *)(iVar6 + 2) | 0x20;
  return;
}



/* ---- FUN_1fff2316 @ 1fff2316 ---- */

void FUN_1fff2316(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  uVar2 = FUN_1fff30ca(0);
  iVar5 = DAT_1fff24bc + 0x50;
  puVar7 = (undefined1 *)(DAT_1fff24bc + param_2 * 0x14);
  iVar6 = *(int *)(iVar5 + param_2 * 4);
  FUN_1fff4944(DAT_1fff24bc + 0x60 + param_2 * 0x28);
  if (param_1 != 0) {
    FUN_1fff068c(0x26);
    if (param_2 == 0) {
      uVar3 = 99;
    }
    else if (param_2 == 1) {
      uVar3 = 100;
    }
    else if (param_2 == 2) {
      uVar3 = 0x65;
    }
    else {
      if (param_2 != 3) goto LAB_1fff2370;
      uVar3 = 0x66;
    }
    FUN_1fff068c(uVar3);
  }
LAB_1fff2370:
  iVar1 = DAT_1fff24c0;
  *(undefined4 *)(iVar5 + param_2 * 4) = *(undefined4 *)(*(int *)(iVar5 + param_2 * 4) + 0x18);
  FUN_1fff6db4(iVar1 + 0x14 + param_2 * 0x18);
  pcVar4 = *(code **)(iVar6 + 0xc);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1,*(undefined4 *)(iVar6 + 0x10));
  }
  *puVar7 = 0;
  if (*(int *)(iVar5 + param_2 * 4) != 0) {
    FUN_1fff2242(param_2);
  }
  FUN_1fff30ca(uVar2);
  return;
}



/* ---- FUN_1fff258e @ 1fff258e ---- */

void FUN_1fff258e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_1fff2784;
  iVar1 = DAT_1fff277c;
  if ((int)((uint)*(byte *)(DAT_1fff277c + param_1) << 0x18) < 0) {
    return;
  }
  *(undefined4 *)(DAT_1fff2780 + param_1 * 4) = 0;
  if (param_1 == 0) {
    *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 0x40;
    FUN_1fff201c(0);
    uVar4 = 0;
    uVar3 = 0x18;
  }
  else if (param_1 == 1) {
    *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 0x80;
    FUN_1fff201c(1);
    uVar4 = 1;
    uVar3 = 0x19;
  }
  else if (param_1 == 2) {
    *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x40;
    FUN_1fff201c(2);
    uVar4 = 2;
    uVar3 = 0x4a;
  }
  else {
    if (param_1 != 3) goto LAB_1fff25e6;
    *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x80;
    FUN_1fff201c(3);
    uVar4 = 3;
    uVar3 = 0x5b;
  }
  FUN_1fff30e6(uVar3,8,DAT_1fff2788,uVar4);
LAB_1fff25e6:
  *(undefined1 *)(DAT_1fff2780 + -0x50 + param_1 * 0x14) = 0;
  FUN_1fff6d06(DAT_1fff277c + 0x18 + param_1 * 0x18);
  *(byte *)(iVar1 + param_1) = *(byte *)(iVar1 + param_1) | 0x80;
  return;
}



/* ---- FUN_1fff278c @ 1fff278c ---- */

undefined4 FUN_1fff278c(uint param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((param_4 == 0) || (param_4 == 2)) {
    uVar2 = 0;
    do {
      if ((*(byte *)(DAT_1fff2970 + uVar2 * 0x15) == param_1) &&
         (*(int *)(uVar2 * 0x15 + DAT_1fff2970 + 1) == param_2)) {
        iVar1 = uVar2 * 0x15 + DAT_1fff2970;
        goto LAB_1fff27f2;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x10);
  }
  if ((param_4 == 1) || (param_4 == 2)) {
    uVar2 = 0;
    do {
      if ((*(byte *)(DAT_1fff2974 + uVar2 * 0x15) == param_1) &&
         (*(int *)(uVar2 * 0x15 + DAT_1fff2974 + 1) == param_2)) {
        iVar1 = uVar2 * 0x15 + DAT_1fff2974;
LAB_1fff27f2:
        *param_3 = iVar1;
        return 1;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x10);
  }
  *param_3 = 0;
  return 0;
}



/* ---- FUN_1fff2806 @ 1fff2806 ---- */

void FUN_1fff2806(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = DAT_1fff2978;
  if (*DAT_1fff2978 == 0) {
    iVar3 = FUN_1fff0568();
    iVar5 = DAT_1fff2970;
    if (iVar3 == DAT_1fff297c) {
      iVar5 = DAT_1fff2974;
    }
    FUN_1fff7ba4(iVar5,0x14000000,0x150);
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(iVar5 + uVar4 * 0x15);
      if ((bVar1 == 0) || (3 < bVar1)) {
        FUN_1fff7d16(uVar4 * 0x15 + iVar5,0x15);
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0x10);
    FUN_1fff7d5a(0x14000000,0x150);
    *piVar2 = 1;
  }
  return;
}



/* ---- FUN_1fff2868 @ 1fff2868 ---- */

void FUN_1fff2868(void)

{
  if (*DAT_1fff2978 != 0) {
    FUN_1fff7ba4(0x14000000,DAT_1fff2974,0x150);
    return;
  }
  return;
}



/* ---- FUN_1fff2886 @ 1fff2886 ---- */

int FUN_1fff2886(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  if (*DAT_1fff2978 == 0) {
    return DAT_1fff2980;
  }
  local_10 = param_4;
  iVar1 = FUN_1fff278c(param_1,param_2,&local_10,2);
  if (iVar1 != 0) {
    FUN_1fff7ba4(param_3,local_10,0x15);
    if (param_4 != 0) {
      FUN_1fff2902(local_10);
    }
    return 0;
  }
  return DAT_1fff2980 + 1;
}



/* ---- FUN_1fff28bc @ 1fff28bc ---- */

int FUN_1fff28bc(undefined1 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 local_30;
  undefined4 local_2f;
  undefined1 auStack_2b [23];
  
  iVar1 = DAT_1fff2980;
  if (*DAT_1fff2978 != 0) {
    if (param_4 < 0x11) {
      FUN_1fff7d5a(&local_30,0x18);
      local_30 = param_1;
      local_2f = param_2;
      FUN_1fff7ba4(auStack_2b,param_3,param_4);
      iVar1 = FUN_1fff2908(&local_30);
    }
    else {
      iVar1 = DAT_1fff2980 + -1;
    }
  }
  return iVar1;
}



/* ---- FUN_1fff2902 @ 1fff2902 ---- */

void FUN_1fff2902(undefined4 param_1)

{
  FUN_1fff7d16(param_1,0x15);
  return;
}



/* ---- FUN_1fff2908 @ 1fff2908 ---- */

int FUN_1fff2908(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  
  local_10 = param_4;
  iVar1 = FUN_1fff278c(*param_1,*(undefined4 *)(param_1 + 1),&local_10,0);
  if (iVar1 == 0) {
    iVar2 = FUN_1fff278c(*param_1,*(undefined4 *)(param_1 + 1),&local_10,1);
    iVar1 = local_10;
    if (iVar2 != 0) goto LAB_1fff2968;
  }
  else {
    FUN_1fff2902(local_10);
  }
  uVar3 = 0;
  while (*(char *)(DAT_1fff2974 + uVar3 * 0x15) != '\0') {
    uVar3 = uVar3 + 1 & 0xff;
    if (0xf < uVar3) {
      return DAT_1fff2980 + -2;
    }
  }
  iVar1 = DAT_1fff2974 + uVar3 * 0x15;
LAB_1fff2968:
  FUN_1fff7ba4(iVar1,param_1,0x15);
  return 0;
}



/* ---- FUN_1fff2984 @ 1fff2984 ---- */

void FUN_1fff2984(void)

{
  return;
}



/* ---- FUN_1fff2986 @ 1fff2986 ---- */

undefined1 * FUN_1fff2986(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_a0000000;
  FUN_1fff8870();
  if ((uint)(param_2 + param_3) < 0x401) {
    FUN_1fff7ba4(param_2 + 0x14000000,param_1,param_3);
    puVar1 = (undefined1 *)0x0;
  }
  FUN_1fff2a1c();
  return puVar1;
}



/* ---- FUN_1fff29b8 @ 1fff29b8 ---- */

undefined4 FUN_1fff29b8(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((((((param_3 & 7) == 0) && (7 < param_3)) && (param_3 < 0x200001)) &&
      (((param_1 & 7) == 0 && (param_1 < 0x200000)))) && (param_1 + param_3 < 0x200001)) {
    while ((param_3 != 0 && (iVar1 = FUN_1fff8b4a(param_1,param_2), iVar1 != 0))) {
      param_3 = param_3 - 8;
      param_1 = param_1 + 8;
      param_2 = param_2 + 8;
    }
    return 1;
  }
  return 0;
}



/* ---- FUN_1fff2a1c @ 1fff2a1c ---- */

void FUN_1fff2a1c(void)

{
  FUN_1fff3144(0);
  *DAT_1fff2a40 = *DAT_1fff2a40 & 0xffffffdf;
  FUN_1fff3144();
  return;
}



/* ---- FUN_1fff2a44 @ 1fff2a44 ---- */

undefined4 FUN_1fff2a44(void)

{
  int iVar1;
  
  iVar1 = DAT_1fff2d74;
  if ((*(byte *)(DAT_1fff2d68 + 0xc) & 3) != 0) {
    iVar1 = DAT_1fff2d70;
  }
  return (int)((ulonglong)
               (iVar1 * (uint)*(byte *)(DAT_1fff2d6c + 0x20 + *(int *)(DAT_1fff2d6c + 4) * 6 + 1)) /
              ((ulonglong)*(byte *)(DAT_1fff2d6c + 0x20 + *(int *)(DAT_1fff2d6c + 4) * 6) << 1));
}



/* ---- FUN_1fff2a74 @ 1fff2a74 ---- */

void FUN_1fff2a74(void)

{
  int iVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar6 = FUN_1fff30ca(0);
  iVar5 = DAT_1fff2d78;
  puVar3 = DAT_1fff2d6c;
  *(uint *)(DAT_1fff2d78 + 0x44) =
       (uint)(byte)DAT_1fff2d6c[0x52] * 0x10000000 + 0xf0000000 |
       ((byte)DAT_1fff2d6c[0x53] - 1) * 0x1000000 & 0xf000000 |
       (uint)(byte)DAT_1fff2d6c[0x54] * 0x100000 - 0x100000 & 0xf00000 |
       ((byte)DAT_1fff2d6c[0x55] - 1) * 0x10000 & 0xf0000;
  pbVar2 = DAT_1fff2d68;
  *DAT_1fff2d68 = *DAT_1fff2d68 | 1;
  *pbVar2 = *pbVar2 | 2;
  *pbVar2 = *pbVar2 & 199;
  *pbVar2 = *pbVar2 | 0x18;
  pbVar2[1] = pbVar2[1] | 1;
  pbVar2[3] = pbVar2[3] | 0x60;
  pbVar2[3] = pbVar2[3] | 0x80;
  puVar4 = DAT_1fff2d6c;
  do {
  } while (-1 < (int)((uint)pbVar2[6] << 0x1b));
  do {
  } while ((pbVar2[6] & 1) == 0);
  do {
  } while ((pbVar2[6] & 0xc) != 0);
  *DAT_1fff2d6c = 1;
  uVar7 = *(uint *)(puVar4 + 4);
  if (uVar7 < 8) {
    if (uVar7 < 4) {
      *DAT_1fff2d7c = 0xa1;
      pbVar2[1] = pbVar2[1] | 0x20;
      pbVar2[1] = pbVar2[1] | 4;
      pbVar2[0xc] = 0;
      *pbVar2 = *pbVar2 & 0x3f;
      *pbVar2 = *pbVar2 & 199;
      *pbVar2 = *pbVar2 & 0xfb;
      *pbVar2 = *pbVar2 | 0xa0;
      do {
      } while (-1 < (int)((uint)pbVar2[6] << 0x1e));
      do {
      } while ((int)((uint)pbVar2[6] << 0x1b) < 0);
      do {
      } while ((pbVar2[6] & 0xf) >> 2 != 2);
    }
    else {
      *DAT_1fff2d7c = 0;
      pbVar2[1] = pbVar2[1] & 0xfb;
      pbVar2[0xc] = 2;
      *pbVar2 = *pbVar2 & 0x3f;
      *pbVar2 = *pbVar2 & 199;
      *pbVar2 = *pbVar2 & 0xfb;
      *pbVar2 = *pbVar2 | 0xa0;
      do {
      } while ((int)((uint)pbVar2[6] << 0x1b) < 0);
      do {
      } while ((pbVar2[6] & 0xf) >> 2 != 2);
    }
    iVar1 = uVar7 * 6;
    *(uint *)(iVar5 + 0x44) =
         (uint)(byte)puVar3[iVar1 + 0x22] * 0x10000000 + 0xf0000000 |
         ((byte)puVar3[iVar1 + 0x23] - 1) * 0x1000000 & 0xf000000 |
         (uint)(byte)puVar3[iVar1 + 0x24] * 0x100000 - 0x100000 & 0xf00000 |
         ((byte)puVar3[iVar1 + 0x25] - 1) * 0x10000 & 0xf0000;
    pbVar2[4] = puVar3[uVar7 * 6 + 0x20] - 1 & 7 | 0x20;
    pbVar2[5] = 0x40;
    do {
    } while (-1 < (int)((uint)pbVar2[6] << 0x1a));
    do {
    } while (-1 < (int)((uint)pbVar2[6] << 0x19));
    pbVar2[5] = pbVar2[5] & 0xe0;
    pbVar2[5] = pbVar2[5] | puVar3[iVar1 + 0x21] - 0x10 & 0x1f;
    pbVar2[4] = pbVar2[4] | 0x40;
    do {
    } while (-1 < (int)((uint)pbVar2[6] << 0x19));
    *pbVar2 = *pbVar2 & 0x3f;
    do {
    } while ((pbVar2[6] & 0xf) >> 2 != 3);
    *puVar4 = 2;
  }
  FUN_1fff2d0e();
  *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xfffcffff;
  *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 0x30000;
  *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xf3ffffff;
  *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 0x4000000;
  *(undefined4 *)(puVar4 + 0x1c) = DAT_1fff2d70;
  FUN_1fff30ca(uVar6);
  return;
}



/* ---- FUN_1fff2c9a @ 1fff2c9a ---- */

undefined4 FUN_1fff2c9a(void)

{
  return *(undefined4 *)(DAT_1fff2d6c + 0x10);
}



/* ---- FUN_1fff2ca0 @ 1fff2ca0 ---- */

undefined4 FUN_1fff2ca0(void)

{
  return *(undefined4 *)(DAT_1fff2d6c + 0x14);
}



/* ---- FUN_1fff2d0e @ 1fff2d0e ---- */

void FUN_1fff2d0e(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pcVar1 = DAT_1fff2d6c;
  if (*DAT_1fff2d6c == '\x01') {
    uVar3 = 0x5b80000;
  }
  else {
    if (*DAT_1fff2d6c != '\x02') goto LAB_1fff2d2a;
    uVar3 = FUN_1fff2a44();
  }
  *(undefined4 *)(pcVar1 + 8) = uVar3;
LAB_1fff2d2a:
  iVar2 = DAT_1fff2d78;
  uVar4 = *(uint *)(pcVar1 + 8);
  *(uint *)(pcVar1 + 0xc) = uVar4 / ((*(uint *)(DAT_1fff2d78 + 0x44) >> 0x1c) + 1);
  *(uint *)(pcVar1 + 0x10) = uVar4 / (((*(uint *)(iVar2 + 0x44) & 0xfffffff) >> 0x18) + 1);
  *(uint *)(pcVar1 + 0x14) = uVar4 / (((*(uint *)(iVar2 + 0x44) & 0xffffff) >> 0x14) + 1);
  *(uint *)(pcVar1 + 0x18) = uVar4 / (((*(uint *)(iVar2 + 0x44) & 0xfffff) >> 0x10) + 1);
  return;
}



/* ---- FUN_1fff2dfc @ 1fff2dfc ---- */

undefined8 FUN_1fff2dfc(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar2 = *DAT_1fff3094;
  do {
    uVar4 = *DAT_1fff3094;
    if (uVar2 == uVar4) break;
    iVar3 = iVar3 + 1;
    uVar2 = uVar4;
  } while (iVar3 < 6);
  iVar3 = -(uint)(uVar2 < DAT_1fff309c);
  uVar1 = DAT_1fff3098;
  if (((uVar2 >= DAT_1fff309c) && (iVar3 = DAT_1fff3094[5] << 0x1e, iVar3 == 0)) &&
     (iVar3 = DAT_1fff3094[5] << 0x1b, iVar3 < 0)) {
    uVar1 = 0;
  }
  return CONCAT44(iVar3,uVar1);
}



/* ---- FUN_1fff2e32 @ 1fff2e32 ---- */

int FUN_1fff2e32(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_1fff30ca(0);
  iVar5 = 0;
  iVar3 = 0;
  iVar2 = *DAT_1fff3094;
  do {
    iVar4 = *DAT_1fff3094;
    if (iVar2 == iVar4) break;
    iVar3 = iVar3 + 1;
    iVar2 = iVar4;
  } while (iVar3 < 6);
  if (param_1 != (int *)0x0) {
    iVar5 = 0;
    iVar3 = DAT_1fff3094[1];
    do {
      iVar4 = DAT_1fff3094[1];
      if (iVar3 == iVar4) break;
      iVar5 = iVar5 + 1;
      iVar3 = iVar4;
    } while (iVar5 < 6);
    iVar4 = 0;
    iVar5 = *DAT_1fff3094;
    do {
      iVar6 = *DAT_1fff3094;
      if (iVar5 == iVar6) break;
      iVar4 = iVar4 + 1;
      iVar5 = iVar6;
    } while (iVar4 < 6);
    if (iVar5 != iVar2) {
      iVar2 = 0;
      iVar3 = DAT_1fff3094[1];
      do {
        iVar4 = DAT_1fff3094[1];
        if (iVar3 == iVar4) break;
        iVar2 = iVar2 + 1;
        iVar3 = iVar4;
      } while (iVar2 < 6);
    }
    *param_1 = iVar3;
  }
  FUN_1fff30ca(uVar1);
  return iVar5;
}



/* ---- FUN_1fff2ea4 @ 1fff2ea4 ---- */

int FUN_1fff2ea4(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_18;
  
  iVar2 = 0;
  local_18 = 0;
  if (param_1 == (longlong *)0x0) {
    iVar2 = DAT_1fff3098 + -1;
  }
  else {
    uVar1 = FUN_1fff2e32(&local_18);
    *param_1 = ((ulonglong)local_18 * (ulonglong)DAT_1fff30a0 >> 0xf) +
               (ulonglong)uVar1 * (ulonglong)DAT_1fff30a0 + CONCAT44(DAT_1fff30a8,DAT_1fff30a4);
  }
  return iVar2;
}



/* ---- FUN_1fff2ee6 @ 1fff2ee6 ---- */

undefined8 FUN_1fff2ee6(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_30;
  uint local_2c;
  int iStack_28;
  
  iVar8 = DAT_1fff3098;
  uVar10 = 0;
  local_30 = param_2;
  if (param_1 == (uint *)0x0) {
    iVar8 = DAT_1fff3098 + -1;
  }
  else {
    uVar7 = param_1[1];
    uVar9 = *param_1;
    if ((DAT_1fff30b0 < uVar7 || uVar7 - DAT_1fff30b0 < (uint)(DAT_1fff30ac <= uVar9)) &&
       (uVar7 < DAT_1fff30b8 || DAT_1fff30b8 - uVar7 < (uint)(uVar9 <= DAT_1fff30b4))) {
      local_2c = param_3;
      iStack_28 = param_4;
      local_30 = FUN_1fff3144(0,DAT_1fff30b4 - uVar9);
      FUN_1fff2ea4(&local_2c);
      uVar3 = DAT_1fff30a0;
      bVar13 = uVar9 < local_2c;
      iVar12 = uVar9 - local_2c;
      iVar1 = uVar7 - iStack_28;
      uVar11 = uVar9 + -DAT_1fff30a4;
      iVar6 = uVar7 + ~DAT_1fff30a8 + (uint)CARRY4(uVar9,-DAT_1fff30a4);
      uVar7 = FUN_1fff779c(uVar11,iVar6,DAT_1fff30a0,0);
      uVar9 = (uint)((ulonglong)uVar7 * (ulonglong)uVar3);
      uVar4 = uVar11 - uVar9;
      uVar9 = (iVar6 - (int)((ulonglong)uVar7 * (ulonglong)uVar3 >> 0x20)) - (uint)(uVar11 < uVar9);
      if (uVar9 == 0 && (uVar3 <= uVar4) <= uVar9) {
        uVar10 = FUN_1fff779c(uVar4 * 0x8000,uVar9 * 0x8000 | uVar4 >> 0x11,uVar3,0);
      }
      uVar5 = FUN_1fff3144(0);
      puVar2 = DAT_1fff3094;
      if (uVar7 < DAT_1fff309c) {
        FUN_1fff3144(uVar5,0xffffffff);
      }
      else {
        DAT_1fff3094[5] = 0;
        puVar2[1] = uVar10;
        *puVar2 = uVar7;
        puVar2[5] = 0x10;
        FUN_1fff3144();
        iVar8 = 0;
      }
      FUN_1fff788a(iVar12,iVar1 - (uint)bVar13,10,0);
      FUN_1fff4bbe();
      FUN_1fff3144(local_30);
    }
  }
  return CONCAT44(local_30,iVar8);
}



/* ---- FUN_1fff2fbe @ 1fff2fbe ---- */

int FUN_1fff2fbe(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1fff2ea4();
  if (param_1 == (uint *)0x0) {
    iVar1 = DAT_1fff3098 + -1;
  }
  else {
    iVar2 = FUN_1fff2dfc();
    if (iVar2 < 0) {
      param_1[1] = 0;
      *param_1 = 0;
    }
    if (param_1[1] <= DAT_1fff30b0 && (uint)(DAT_1fff30ac <= *param_1) <= param_1[1] - DAT_1fff30b0)
    {
      iVar1 = DAT_1fff3098;
    }
  }
  return iVar1;
}



/* ---- FUN_1fff2ff2 @ 1fff2ff2 ---- */

int FUN_1fff2ff2(int param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    if (*(char *)(param_1 + 5) == '\x04') {
      *(undefined4 *)(DAT_1fff3094 + 0xc) = *(undefined4 *)(param_1 + 6);
      return 0;
    }
  }
  else {
    if (*(char *)(param_1 + 4) != '\x01') {
      return DAT_1fff30bc + -1;
    }
    if (*(char *)(param_1 + 5) == '\x04') {
      *(undefined4 *)(DAT_1fff3094 + 0x10) = *(undefined4 *)(param_1 + 6);
      return 0;
    }
  }
  return DAT_1fff30bc;
}



/* ---- FUN_1fff30c0 @ 1fff30c0 ---- */

undefined4 FUN_1fff30c0(void)

{
  bool bVar1;
  
  enableIRQinterrupts();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  return 0;
}



/* ---- FUN_1fff30ca @ 1fff30ca ---- */

bool FUN_1fff30ca(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (param_1 == 0) {
    uVar2 = 0x70;
  }
  else {
    uVar2 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar2);
  }
  return iVar3 == 0;
}



/* ---- FUN_1fff30e6 @ 1fff30e6 ---- */

void FUN_1fff30e6(uint param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  if ((int)param_1 < 100) {
    uVar1 = FUN_1fff30ca(0);
    puVar2 = (undefined4 *)(DAT_1fff317c + param_1 * 0x10);
    if (puVar2[3] == 0) {
      *puVar2 = extraout_r2;
      puVar2[1] = extraout_r3;
      *(char *)(puVar2 + 2) = (char)param_1;
      if ((int)param_1 < 0) {
        *(char *)((param_1 & 0xf) + 0xe000ed14) = param_2 << 4;
      }
      else {
        *(char *)(param_1 + 0xe000e400) = param_2 << 4;
      }
      *(int *)((param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
    }
    FUN_1fff30ca(uVar1);
    return;
  }
  return;
}



/* ---- FUN_1fff3144 @ 1fff3144 ---- */

bool FUN_1fff3144(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  if (param_1 == 0) {
    disableIRQinterrupts();
  }
  else {
    enableIRQinterrupts();
  }
  return iVar2 == 0;
}



/* ---- FUN_1fff315c @ 1fff315c ---- */

void FUN_1fff315c(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  puVar3 = (undefined4 *)(DAT_1fff317c + (uVar2 - 0x10) * 0x10);
  (*(code *)*puVar3)(puVar3[1]);
  *DAT_1fff3180 = *puVar3;
  return;
}



/* ---- FUN_1fff3188 @ 1fff3188 ---- */

undefined4 FUN_1fff3188(undefined4 param_1)

{
  FUN_1fff7ba4(param_1,DAT_1fff328c,0x10);
  return 0;
}



/* ---- vector_core_4 @ 1fff318c ---- */

undefined4 vector_core_4(undefined4 param_1,undefined4 param_2)

{
  FUN_1fff7ba4(param_1,param_2,0x10);
  return 0;
}



/* ---- FUN_1fff3196 @ 1fff3196 ---- */

undefined1 * FUN_1fff3196(uint param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  
  if (((*DAT_1fff3290 & 1) != 0) &&
     (piVar1 = (int *)(param_1 * 4 + -0x20000000),
     (DAT_1fff3290[-0x20] & 1 << (param_1 & 0xff)) != 0)) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      do {
      } while (*piVar1 == 0);
      *(undefined1 *)piVar1 = *param_2;
      param_2 = param_2 + 1;
    }
    return (undefined1 *)0x0;
  }
  return &DAT_a0000000;
}



/* ---- FUN_1fff31e2 @ 1fff31e2 ---- */

undefined4 FUN_1fff31e2(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  return uVar2;
}



/* ---- FUN_1fff31e8 @ 1fff31e8 ---- */

undefined4 FUN_1fff31e8(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  return uVar2;
}



/* ---- FUN_1fff3234 @ 1fff3234 ---- */

void FUN_1fff3234(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_1fff32a4;
  piVar1 = DAT_1fff32a0;
  if (*DAT_1fff32a0 == 0) {
    *(uint *)(DAT_1fff328c + -0x18) = *(uint *)(DAT_1fff328c + -0x18) | 0x800000;
    *puVar2 = 0xfffffffd;
    puVar2[0x44] = 0xffffffff;
    puVar2[0x46] = puVar2[0x46] | 1;
    *piVar1 = 1;
  }
  uVar3 = puVar2[0x45];
  uVar4 = FUN_1fff2c9a();
  do {
  } while (~puVar2[0x45] - ~uVar3 < param_1 * (uVar4 / DAT_1fff32a8));
  return;
}



/* ---- FUN_1fff32ac @ 1fff32ac ---- */

void FUN_1fff32ac(undefined1 *param_1)

{
  FUN_1fff3f74(*param_1,1,DAT_1fff34f0);
  FUN_1fff3fa4(*param_1,1,0x80);
                    /* WARNING: Could not recover jumptable at 0x1fff32d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_1fff34f0 + 4))(*param_1,10,0);
  return;
}



/* ---- FUN_1fff347e @ 1fff347e ---- */

undefined4 FUN_1fff347e(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint local_28;
  int local_24;
  
  local_28 = param_3;
  local_24 = param_4;
  FUN_1fff3f74(param_1,1,&local_28);
  FUN_1fff3f74(param_1,6,&local_24);
  if ((short)local_28 == 0x80) {
    if (-1 < local_24 << 0x1e) {
      return 0;
    }
    uVar1 = FUN_1fff30ca(0);
    FUN_1fff3d82(param_1);
    local_28 = local_28 & 0xffff0000;
    FUN_1fff3fa4(param_1,1,0);
    FUN_1fff30ca(uVar1);
    if ((short)local_28 == 0x80) {
      return 0;
    }
  }
  uVar1 = FUN_1fff3cba(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ---- FUN_1fff350c @ 1fff350c ---- */

void FUN_1fff350c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1fff4b6e(param_1,param_3,param_2);
  return;
}



/* ---- FUN_1fff3516 @ 1fff3516 ---- */

void FUN_1fff3516(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_1fff390c;
  iVar3 = 0;
  *(uint *)(DAT_1fff390c + 0x34) = *(uint *)(DAT_1fff390c + 0x34) | 0x40000;
  iVar2 = DAT_1fff3910;
  do {
    if (-1 < (int)((uint)*(byte *)(DAT_1fff3910 + 0x10c) << 0x18)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 <= iVar1 >> 0x13);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffcffff;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x30000;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x40000;
  *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 0xfffffff0;
  *(byte *)(iVar2 + 0x144) = *(byte *)(iVar2 + 0x144) | 2;
  *(byte *)(iVar2 + 0x140) = *(byte *)(iVar2 + 0x140) | 0x80;
  return;
}



/* ---- FUN_1fff3572 @ 1fff3572 ---- */

undefined4 FUN_1fff3572(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = DAT_1fff3914;
  uVar5 = 0x94;
  if (*(int *)(DAT_1fff3914 + 0xc) != 0) {
    uVar2 = FUN_1fff3e6e(param_2,0);
    puVar4 = (ushort *)(DAT_1fff3918 + (uVar2 >> 1) * 0x10);
    uVar2 = (uint)*(byte *)((int)puVar4 + 0xd);
    if (uVar2 != 0xff) {
      iVar6 = *(int *)(iVar6 + 4);
      uVar1 = *puVar4;
      if ((uVar1 != 0xffff) && (-1 < (int)((uint)*(byte *)(iVar6 + (uVar2 ^ 1) * 8) << 0x18))) {
        if (param_4 == 0) {
          pbVar3 = (byte *)(iVar6 + uVar2 * 8);
          *(ushort *)(pbVar3 + 2) = uVar1;
          *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(puVar4 + 1);
          *pbVar3 = *pbVar3 & 0x40 | 0x88;
          uVar5 = 0;
        }
        else {
          if (uVar1 < param_4) {
            param_4 = (uint)(byte)uVar1;
          }
          pbVar3 = (byte *)(iVar6 + uVar2 * 8);
          uVar5 = 0;
          *(short *)(pbVar3 + 2) = (short)param_4;
          *(undefined4 *)(pbVar3 + 4) = param_3;
          *pbVar3 = *pbVar3 & 0x40 | 0x88;
        }
      }
    }
  }
  return uVar5;
}



/* ---- FUN_1fff35f8 @ 1fff35f8 ---- */

undefined4 FUN_1fff35f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_1fff3914;
  uVar6 = 0xc4;
  if (*(int *)(DAT_1fff3914 + 0xc) != 0) {
    uVar2 = FUN_1fff3e6e(param_2,param_3,0);
    if (uVar2 != 0xff) {
      iVar3 = DAT_1fff3918 + (uVar2 >> 1) * 0x10;
      uVar2 = (uint)*(byte *)(iVar3 + 0xd);
      pbVar5 = (byte *)(*(int *)(iVar1 + 4) + uVar2 * 8);
      pbVar4 = (byte *)(*(int *)(iVar1 + 4) + (uVar2 ^ 1) * 8);
      *pbVar5 = *pbVar5 & 0x7f;
      *pbVar4 = *pbVar4 & 0x7f;
      *(undefined1 *)(iVar3 + 10) = 0xff;
      uVar6 = 0;
    }
  }
  return uVar6;
}



/* ---- FUN_1fff3644 @ 1fff3644 ---- */

void FUN_1fff3644(uint param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ushort *puVar5;
  byte *pbVar6;
  
  param_2[3] = (byte)((param_1 << 0x1c) >> 0x1f);
  uVar3 = FUN_1fff3e56(param_2[1],(param_1 & 0xf) >> 3,(param_1 & 7) >> 2);
  pbVar1 = DAT_1fff3914;
  pbVar4 = (byte *)(*(int *)(DAT_1fff3914 + 4) + uVar3 * 8);
  pbVar6 = (byte *)(*(int *)(DAT_1fff3914 + 4) + (uVar3 ^ 1) * 8);
  puVar5 = (ushort *)(DAT_1fff3918 + (uVar3 >> 1) * 0x10);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pbVar4 + 4);
  param_2[8] = pbVar4[2];
  *(byte *)((int)puVar5 + 0xd) = *(byte *)((int)puVar5 + 0xd) ^ 1;
  *pbVar6 = (byte)(((*pbVar4 & 0x7f) >> 6 ^ 1) << 6);
  if (param_2[3] == '\x01') {
    if ((param_2[1] == '\0') && (*pbVar1 == 0)) {
      *pbVar1 = 0xff;
      FUN_1fff35f8(*param_2,0);
      *pbVar6 = 0;
      FUN_1fff3572(*param_2,0,0);
    }
    if ((*pbVar1 == 1) || (param_2[1] != '\0')) {
      bVar2 = *(char *)((int)puVar5 + 0xb) + param_2[8];
      *(byte *)((int)puVar5 + 0xb) = bVar2;
      if ((bVar2 < (byte)puVar5[5]) ||
         (((ushort)(byte)param_2[8] == *puVar5 && ((char)puVar5[6] == '\x01')))) {
        FUN_1fff3e8e(pbVar6,puVar5);
        *pbVar6 = *pbVar6 & 0x40 | 0x88;
        return;
      }
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar5 + 3);
      param_2[8] = *(undefined1 *)((int)puVar5 + 0xb);
    }
  }
  else if (param_2[1] == '\0') {
    if ((*pbVar4 & 0x3f) >> 2 == 0xd) {
      param_2[2] = 1;
      *pbVar1 = **(byte **)(param_2 + 4) >> 7;
    }
    else if (*pbVar1 == 1) {
      *pbVar1 = 0xff;
      FUN_1fff35f8(*param_2,0,1);
      *pbVar6 = 0;
      FUN_1fff3572(*param_2,0,0);
    }
  }
  FUN_1fff4054(param_2[1],param_2);
  return;
}



/* ---- FUN_1fff375c @ 1fff375c ---- */

void FUN_1fff375c(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  short local_48 [2];
  undefined1 local_44;
  byte local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 local_3c;
  byte local_3b;
  short local_34 [8];
  
  iVar4 = DAT_1fff3910;
  if (-1 < *(int *)(DAT_1fff390c + 0x34) << 0xd) {
    return;
  }
  bVar1 = *(byte *)(DAT_1fff3910 + 0x90);
  bVar2 = *(byte *)(DAT_1fff3910 + 0x80) & *(byte *)(DAT_1fff3910 + 0x84);
  uVar8 = (uint)bVar2;
  local_34[0] = -1;
  bVar3 = false;
  if ((bVar2 & 1) == 0) {
    *(byte *)(DAT_1fff3910 + 0x80) = bVar2;
    if (-1 < (int)(uVar8 << 0x1b)) goto LAB_1fff37a8;
    uVar6 = 0x20;
  }
  else {
    if ((int)(uVar8 << 0x1d) < 0) {
      *(undefined1 *)(DAT_1fff3910 + 0x80) = 4;
    }
    uVar6 = 1;
  }
  *(undefined1 *)(iVar4 + 0x80) = uVar6;
LAB_1fff37a8:
  iVar5 = DAT_1fff3914;
  local_44 = *(undefined1 *)(DAT_1fff3914 + 1);
  local_42 = 0;
  local_3c = 0;
  local_41 = 0;
  local_40 = (undefined1 *)0x0;
  local_3b = 0;
  local_43 = 0xff;
  FUN_1fff3f74(local_44,1,local_34);
  *(undefined4 *)(iVar5 + 8) = 0;
  if (((*(byte *)(iVar4 + 0x10c) & 1) != 0) && (local_34[0] == 0x80)) {
    *(byte *)(iVar4 + 0x100) = *(byte *)(iVar4 + 0x100) & 0x7f;
    *(byte *)(iVar4 + 0x10c) = *(byte *)(iVar4 + 0x10c) & 0xdf;
    bVar3 = true;
  }
  if ((int)(uVar8 << 0x1d) < 0) {
    local_48[0] = CONCAT11(*(undefined1 *)(iVar4 + 0xa4),*(undefined1 *)(iVar4 + 0xa0));
    local_40 = (undefined1 *)local_48;
    FUN_1fff4054(0x12,&local_44);
  }
  if ((bVar2 & 1) == 0) {
    if ((int)(uVar8 << 0x1c) < 0) {
      local_43 = bVar1 >> 4;
      FUN_1fff3644(bVar1,&local_44);
      *(byte *)(iVar4 + 0x94) = *(byte *)(iVar4 + 0x94) & 0xdf;
    }
    if ((int)(uVar8 << 0x1e) < 0) {
      local_3b = *(byte *)(iVar4 + 0x88) & *(byte *)(iVar4 + 0x8c);
      FUN_1fff4054(0x16,&local_44);
      *(byte *)(iVar4 + 0x88) = 0xbf;
      *(byte *)(iVar4 + 0x94) = *(byte *)(iVar4 + 0x94) & 0xdf;
    }
    if ((int)(uVar8 << 0x1b) < 0) {
      *(undefined4 *)(iVar5 + 8) = 1;
      FUN_1fff4054(0x14,&local_44);
      *(byte *)(iVar4 + 0x10c) = *(byte *)(iVar4 + 0x10c) | 0x20;
      *(byte *)(iVar4 + 0x100) = *(byte *)(iVar4 + 0x100) | 0x80;
      *(byte *)(iVar4 + 0x84) = *(byte *)(iVar4 + 0x84) | 0x20;
    }
    if (((int)(uVar8 << 0x1a) < 0) || (bVar3)) {
      FUN_1fff4054(0x13,&local_44);
      *(byte *)(iVar4 + 0x84) = *(byte *)(iVar4 + 0x84) & 0xdf;
    }
    if (-1 < (int)(uVar8 << 0x18)) {
      return;
    }
    local_43 = 0xff;
    FUN_1fff3f74(local_44,0x10,local_48);
    if (local_48[0] == 1) {
      local_43 = 0;
      local_41 = 1;
    }
    uVar7 = 0x17;
  }
  else {
    FUN_1fff3dfe();
    uVar7 = 0x10;
  }
  FUN_1fff4054(uVar7,&local_44);
  *(byte *)(iVar4 + 0x94) = *(byte *)(iVar4 + 0x94) & 0xdf;
  return;
}



/* ---- FUN_1fff3a32 @ 1fff3a32 ---- */

undefined4 FUN_1fff3a32(undefined4 param_1,byte *param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint local_20 [2];
  
  bVar1 = *param_2;
  bVar2 = param_2[2];
  uVar10 = (uint)bVar2;
  local_20[0] = *DAT_1fff3d38;
  local_20[1] = DAT_1fff3d38[1];
  if (0x40 < param_2[3]) {
    param_2[3] = 0x40;
  }
  uVar5 = FUN_1fff3e56((uint)bVar1,uVar10,0);
  iVar4 = DAT_1fff3d30;
  if ((((uVar5 == 0xff) ||
       (puVar6 = (ushort *)(DAT_1fff3d34 + (uVar5 >> 1) * 0x10), *puVar6 != 0xffff)) ||
      (uVar5 = *(uint *)(DAT_1fff3d30 + 0x10), DAT_1fff3d34 <= uVar5)) ||
     ((3 < param_2[1] || (1 < param_2[2])))) {
    uVar7 = 0x95;
  }
  else {
    if (*(char *)((int)puVar6 + 0xd) == -1) {
      *(undefined1 *)((int)puVar6 + 0xd) = 0;
    }
    *puVar6 = (ushort)param_2[3];
    *(undefined1 *)(puVar6 + 6) = param_3;
    bVar3 = bVar2 << 1 | bVar1 << 2 | *(byte *)((int)puVar6 + 0xd) & 1;
    *(byte *)((int)puVar6 + 0xd) = bVar3;
    *(uint *)(puVar6 + 1) = uVar5;
    *(byte *)((int)puVar6 + 0xf) = param_2[1];
    *(byte *)(puVar6 + 7) = bVar2;
    puVar9 = (undefined1 *)(*(int *)(iVar4 + 4) + (uint)bVar3 * 8);
    *(ushort *)(puVar9 + 2) = (ushort)param_2[3];
    *(uint *)(puVar9 + 4) = uVar5;
    *puVar9 = 8;
    puVar9 = (undefined1 *)(*(int *)(iVar4 + 4) + (*(byte *)((int)puVar6 + 0xd) ^ 1) * 8);
    *(ushort *)(puVar9 + 2) = (ushort)param_2[3];
    *(uint *)(puVar9 + 4) = uVar5;
    *puVar9 = 0x48;
    *(uint *)(iVar4 + 0x10) = uVar5 + param_2[3];
    if (uVar10 == 0) {
      pbVar8 = (byte *)(*(int *)(iVar4 + 4) + (uint)*(byte *)((int)puVar6 + 0xd) * 8);
      *pbVar8 = *pbVar8 | 0x80;
    }
    uVar5 = local_20[uVar10] | (uint)(param_2[1] != 1);
    local_20[uVar10] = uVar5;
    pbVar8 = (byte *)(DAT_1fff3d28 + (uint)bVar1 * 4 + 0xc0);
    *pbVar8 = *pbVar8 | (byte)uVar5;
    uVar7 = 0;
  }
  return uVar7;
}



/* ---- FUN_1fff3b22 @ 1fff3b22 ---- */

undefined4 FUN_1fff3b22(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1fff3e6e(param_2,param_3,0);
  if (uVar2 == 0xff) {
    uVar4 = 0x96;
  }
  else {
    FUN_1fff35f8(param_1,param_2,param_3);
    iVar1 = DAT_1fff3d28;
    puVar3 = (ushort *)(DAT_1fff3d34 + (uVar2 >> 1) * 0x10);
    *(uint *)(DAT_1fff3d30 + 0x10) = *(int *)(DAT_1fff3d30 + 0x10) - (uint)*puVar3;
    *(undefined1 *)(iVar1 + param_2 * 4 + 0xc0) = 0;
    *puVar3 = 0xffff;
    puVar3[1] = 0xffff;
    puVar3[2] = 0xffff;
    uVar4 = 0;
  }
  return uVar4;
}



/* ---- FUN_1fff3b78 @ 1fff3b78 ---- */

void FUN_1fff3b78(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_1fff3d30;
  if (*(int *)(DAT_1fff3d30 + 0xc) != 0) {
    uVar2 = FUN_1fff3e6e(param_2,param_3,0);
    uVar2 = (uint)*(byte *)(DAT_1fff3d34 + (uVar2 >> 1) * 0x10 + 0xd);
    if (uVar2 != 0xff) {
      FUN_1fff35f8(param_1,param_2,param_3);
      *(byte *)(*(int *)(iVar1 + 4) + uVar2 * 8) = *(byte *)(*(int *)(iVar1 + 4) + uVar2 * 8) | 0x84
      ;
    }
  }
  return;
}



/* ---- FUN_1fff3bbc @ 1fff3bbc ---- */

void FUN_1fff3bbc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  
  iVar1 = DAT_1fff3d30;
  if (*(int *)(DAT_1fff3d30 + 0xc) != 0) {
    uVar2 = FUN_1fff3e6e(param_2,param_3,0);
    iVar4 = DAT_1fff3d34 + (uVar2 >> 1) * 0x10;
    uVar2 = (uint)*(byte *)(iVar4 + 0xd);
    if (uVar2 != 0xff) {
      pbVar3 = (byte *)(DAT_1fff3d28 + 0xc0 + param_2 * 4);
      if (param_2 != 0) {
        if (param_3 == 1) {
          bVar5 = 4;
        }
        else {
          bVar5 = 8;
        }
        *pbVar3 = *pbVar3 | bVar5 | *(char *)(iVar4 + 0xf) != '\x01' | 0x10;
      }
      *pbVar3 = *pbVar3 & 0xfd;
      *(undefined1 *)(*(int *)(iVar1 + 4) + uVar2 * 8) = 0;
      if (param_3 == 0) {
        FUN_1fff3572(param_1,param_2,0);
        return;
      }
    }
  }
  return;
}



/* ---- FUN_1fff3c36 @ 1fff3c36 ---- */

void FUN_1fff3c36(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1fff3e6e(param_2,0);
  FUN_1fff4b5a(param_3,*(undefined4 *)
                        (*(int *)(DAT_1fff3d30 + 4) +
                         (uint)*(byte *)(DAT_1fff3d34 + (uVar1 >> 1) * 0x10 + 0xd) * 8 + 4),8);
  return;
}



/* ---- FUN_1fff3cba @ 1fff3cba ---- */

undefined4 FUN_1fff3cba(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_1fff3d30;
  uVar6 = 0x93;
  if (*(int *)(DAT_1fff3d30 + 0xc) != 0) {
    uVar3 = FUN_1fff3e6e(param_2,1,0);
    iVar4 = DAT_1fff3d34 + (uVar3 >> 1) * 0x10;
    if (uVar3 == 0xff) {
      uVar6 = 0x93;
    }
    else {
      pbVar5 = (byte *)(*(int *)(iVar1 + 4) + (uint)*(byte *)(iVar4 + 0xd) * 8);
      if ((-1 < (int)((uint)*pbVar5 << 0x18)) &&
         (-1 < (int)((uint)*(byte *)(DAT_1fff3d28 + param_2 * 4 + 0xc0) << 0x1e))) {
        *(undefined1 *)(iVar4 + 10) = param_4;
        *(undefined4 *)(iVar4 + 6) = param_3;
        *(undefined1 *)(iVar4 + 0xb) = 0;
        FUN_1fff3e8e(pbVar5);
        if (param_2 == 0) {
          bVar2 = 200;
        }
        else {
          bVar2 = *pbVar5 & 0x40 | 0x88;
        }
        *pbVar5 = bVar2;
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}



/* ---- FUN_1fff3d4c @ 1fff3d4c ---- */

void FUN_1fff3d4c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = DAT_1fff3eac;
  if (*(int *)(DAT_1fff3eac + 0xc) != 0) {
    *(undefined1 *)(DAT_1fff3eb0 + 0x98) = param_2;
    FUN_1fff3fa4(*(undefined1 *)(iVar1 + 1),1);
    return;
  }
  return;
}



/* ---- FUN_1fff3d82 @ 1fff3d82 ---- */

void FUN_1fff3d82(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_1fff3eb0;
  if (*(int *)(DAT_1fff3eac + 0xc) != 0) {
    *(byte *)(DAT_1fff3eb0 + 0x100) = *(byte *)(DAT_1fff3eb0 + 0x100) & 0x7f;
    *(byte *)(iVar2 + 0x10c) = *(byte *)(iVar2 + 0x10c) & 0xdf;
    *(byte *)(iVar2 + 0x80) = *(byte *)(iVar2 + 0x80) | 0x20;
    *(byte *)(iVar2 + 0x84) = *(byte *)(iVar2 + 0x84) & 0xdf;
    *(byte *)(iVar2 + 0x94) = *(byte *)(iVar2 + 0x94) & 0xdf;
    *(byte *)(iVar2 + 0x94) = *(byte *)(iVar2 + 0x94) | 4;
    sVar1 = -0x63c0;
    do {
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    *(byte *)(iVar2 + 0x94) = *(byte *)(iVar2 + 0x94) & 0xfb;
  }
  return;
}



/* ---- FUN_1fff3dfe @ 1fff3dfe ---- */

void FUN_1fff3dfe(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = DAT_1fff3eb0;
  *(undefined1 *)(DAT_1fff3eb0 + 0x88) = 0xbf;
  pbVar1 = (byte *)(iVar3 + 0x94);
  *pbVar1 = *pbVar1 | 2;
  *(undefined1 *)(iVar3 + 0x98) = 0;
  *(undefined1 *)(iVar3 + 0x100) = 0;
  FUN_1fff350c(DAT_1fff3eb4,0x60,0xff);
  puVar2 = DAT_1fff3eac;
  FUN_1fff350c(*(undefined4 *)(DAT_1fff3eac + 4),0x160,0);
  *(int *)(puVar2 + 0x10) = *(int *)(puVar2 + 4) + 0x60;
  *puVar2 = 0xff;
  *pbVar1 = *pbVar1 & 0xfd;
  *(undefined1 *)(iVar3 + 0x8c) = 0xbf;
  *(undefined1 *)(iVar3 + 0x84) = 0x9f;
  *pbVar1 = *pbVar1 & 0xdf;
  return;
}



/* ---- FUN_1fff3e56 @ 1fff3e56 ---- */

uint FUN_1fff3e56(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0xff;
  if ((param_1 < 3) && (uVar1 = param_3 + param_1 * 4 & 0xff, param_2 == 1)) {
    uVar1 = uVar1 + 2 & 0xff;
  }
  return uVar1;
}



/* ---- FUN_1fff3e6e @ 1fff3e6e ---- */

uint FUN_1fff3e6e(void)

{
  uint uVar1;
  
  uVar1 = FUN_1fff3e56();
  if ((uVar1 != 0xff) && (*(short *)(DAT_1fff3eb4 + (uVar1 >> 1) * 0x10) == -1)) {
    uVar1 = 0xff;
  }
  return uVar1;
}



/* ---- FUN_1fff3e8e @ 1fff3e8e ---- */

void FUN_1fff3e8e(int param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 3);
  bVar1 = *(byte *)((int)param_2 + 0xb);
  uVar2 = *param_2;
  iVar4 = (uint)(byte)param_2[5] - (uint)bVar1;
  if (iVar4 <= (int)(uint)uVar2) {
    uVar2 = (ushort)iVar4;
  }
  *(ushort *)(param_1 + 2) = uVar2;
  *(uint *)(param_1 + 4) = iVar3 + (uint)bVar1;
  return;
}



/* ---- FUN_1fff3eb8 @ 1fff3eb8 ---- */

void FUN_1fff3eb8(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  *DAT_1fff4074 = DAT_1fff4074[1];
  iVar2 = DAT_1fff4078;
  do {
    *(undefined2 *)(iVar2 + uVar3 * 2) = 0xffff;
    puVar1 = DAT_1fff4074;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 7);
  uVar3 = 0;
  do {
    *(undefined2 *)(puVar1 + uVar3 * 2 + 2) = 5;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 3);
  return;
}



/* ---- FUN_1fff3eea @ 1fff3eea ---- */

undefined4 FUN_1fff3eea(undefined1 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 unaff_r4;
  
  if (2 < param_2 - 1U) {
    return 0x99;
  }
  *(char *)(DAT_1fff4074 + 1) = (char)(param_2 - 1U);
  FUN_1fff3eb8();
  FUN_1fff350c(DAT_1fff4078 + -0x60,0x60,0);
  FUN_1fff3516();
  *(uint *)(DAT_1fff3d20 + 0x34) = *(uint *)(DAT_1fff3d20 + 0x34) | 0x40000;
  *DAT_1fff3d24 = *DAT_1fff3d24 | 0x80000000;
  iVar2 = DAT_1fff3d28;
  *(undefined1 *)(DAT_1fff3d28 + 0x94) = 0;
  *(byte *)(iVar2 + 0x108) = *(byte *)(iVar2 + 0x108) & 0xef;
  *(undefined1 *)(iVar2 + 0x100) = 0;
  *(byte *)(iVar2 + 0x80) = *(byte *)(iVar2 + 0x80) | 0xbf;
  *(byte *)(iVar2 + 0x100) = *(byte *)(iVar2 + 0x100) & 0x7f;
  *(undefined1 *)(iVar2 + 0x84) = 0;
  *(byte *)(iVar2 + 0x84) = *(byte *)(iVar2 + 0x84) | 1;
  *(byte *)(iVar2 + 0x84) = *(byte *)(iVar2 + 0x84) | 0x10;
  *(byte *)(iVar2 + 0x108) = *(byte *)(iVar2 + 0x108) | 0x10;
  puVar4 = DAT_1fff3d30;
  uVar3 = DAT_1fff3d2c;
  uVar1 = (uint)DAT_1fff3d2c >> 8;
  *(undefined4 *)(DAT_1fff3d30 + 4) = DAT_1fff3d2c;
  *(byte *)(iVar2 + 0x9c) = (byte)uVar1 & 0xfe;
  *(char *)(iVar2 + 0xb0) = (char)((uint)uVar3 >> 0x10);
  *(char *)(iVar2 + 0xb4) = (char)((uint)uVar3 >> 0x18);
  puVar4[1] = param_1;
  FUN_1fff350c(DAT_1fff3d34,0x60,0xff);
  FUN_1fff350c(*(undefined4 *)(puVar4 + 4),0x160,0);
  *puVar4 = 0xff;
  *(int *)(puVar4 + 0x10) = *(int *)(puVar4 + 4) + 0x60;
  FUN_1fff30e6(0x35,7,0x1fff375d,0,unaff_r4);
  *(undefined1 *)(iVar2 + 0x94) = 1;
  *(undefined4 *)(puVar4 + 0xc) = 1;
  return 0;
}



/* ---- FUN_1fff3f20 @ 1fff3f20 ---- */

int FUN_1fff3f20(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_1fff4074;
  if ((*DAT_1fff4074 == '\0') && (*param_2 != '\0')) {
    iVar2 = 0x95;
  }
  else {
    iVar2 = FUN_1fff3a32(param_1,param_2);
    if ((*param_2 != '\0') && (iVar2 == 0)) {
      *pcVar1 = *pcVar1 + -1;
      return 0;
    }
  }
  return iVar2;
}



/* ---- FUN_1fff3f4a @ 1fff3f4a ---- */

int FUN_1fff3f4a(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_1fff4074;
  if ((*DAT_1fff4074 == DAT_1fff4074[1]) && (param_2 != 0)) {
    iVar2 = 0x96;
  }
  else {
    iVar2 = FUN_1fff3b22(param_1,param_2);
    if ((param_2 != 0) && (iVar2 == 0)) {
      *pcVar1 = *pcVar1 + '\x01';
      return 0;
    }
  }
  return iVar2;
}



/* ---- FUN_1fff3f74 @ 1fff3f74 ---- */

undefined4 FUN_1fff3f74(undefined4 param_1,uint param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 - 1 < 7) {
    uVar1 = *(undefined2 *)(DAT_1fff4078 + param_2 * 2 + -2);
  }
  else {
    if ((-1 < (int)(param_2 << 0x1b)) || (2 < (param_2 & 0xf))) {
      return 0x82;
    }
    uVar1 = *(undefined2 *)(DAT_1fff4074 + 2 + (param_2 & 0xf) * 2);
  }
  *param_3 = uVar1;
  return 0;
}



/* ---- FUN_1fff3fa4 @ 1fff3fa4 ---- */

undefined4 FUN_1fff3fa4(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xf;
  if (param_2 - 1 < 7) {
    *(short *)(DAT_1fff4078 + param_2 * 2 + -2) = (short)param_3;
  }
  else {
    if ((-1 < (int)(param_2 << 0x1b)) || (2 < uVar1)) {
      return 0x82;
    }
    param_2 = param_2 >> 7;
    if (param_3 == 1) {
      FUN_1fff3b78(param_1,uVar1,param_2);
    }
    else if ((param_3 == 0) && (FUN_1fff3bbc(param_1,uVar1,param_2), uVar1 == 0)) {
      FUN_1fff3bbc(param_1,0,param_2 == 0);
    }
    *(short *)(DAT_1fff4074 + 2 + uVar1 * 2) = (short)param_3;
  }
  return 0;
}



/* ---- FUN_1fff400e @ 1fff400e ---- */

undefined4 FUN_1fff400e(undefined4 param_1,uint param_2,undefined4 param_3)

{
  if (((param_2 < 3) || (param_2 - 0x10 < 8)) && (*(int *)(DAT_1fff4078 + -0x60 + param_2 * 4) == 0)
     ) {
    *(undefined4 *)(DAT_1fff4078 + -0x60 + param_2 * 4) = param_3;
    return 0;
  }
  return 0x8c;
}



/* ---- FUN_1fff4054 @ 1fff4054 ---- */

undefined4 FUN_1fff4054(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (param_1 == 0x10) {
    FUN_1fff3eb8();
  }
  pcVar1 = *(code **)(DAT_1fff4078 + -0x60 + param_1 * 4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  return 0;
}



/* ---- FUN_1fff407c @ 1fff407c ---- */

void FUN_1fff407c(undefined4 param_1,int param_2,byte *param_3,undefined4 *param_4,byte *param_5)

{
  if (param_2 == 0xcd) {
    FUN_1fff3fa4(param_1,0x90,1);
    return;
  }
  if (param_2 != 0xce) {
    if (*(ushort *)(param_3 + 6) < (ushort)*param_5) {
      *param_5 = (byte)*(ushort *)(param_3 + 6);
    }
    FUN_1fff347e(param_1,0,*param_4,*param_5);
    if ((int)((uint)*param_3 << 0x18) < 0) {
      FUN_1fff3572(param_1,0,0);
      return;
    }
  }
  return;
}



/* ---- FUN_1fff4210 @ 1fff4210 ---- */

void FUN_1fff4210(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_1fff44d8;
  *(undefined4 *)(DAT_1fff44d8 + -8) = param_2;
  *(undefined4 *)(iVar1 + -4) = param_3;
  FUN_1fff400e(param_1,0,DAT_1fff44e0);
  return;
}



/* ---- FUN_1fff4396 @ 1fff4396 ---- */

undefined4 FUN_1fff4396(undefined4 param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  
  *param_4 = 0;
  uVar1 = 0xcd;
  if (((*(ushort *)(param_2 + 2) < 0x80) && (*(short *)(param_2 + 4) == 0)) &&
     (*(short *)(param_2 + 6) == 0)) {
    FUN_1fff3fa4(param_1,1,4);
    *(undefined1 *)(DAT_1fff44d8 + -0xc) = *(undefined1 *)(param_2 + 2);
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_1fff43ca @ 1fff43ca ---- */

undefined4 FUN_1fff43ca(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_1fff44d8;
  *param_4 = 1;
  FUN_1fff3f74(param_1,4,iVar1 + -10);
  if (*(short *)(DAT_1fff44d8 + -10) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_1fff44d8 + -10;
  }
  *param_3 = iVar1;
  return 0;
}



/* ---- FUN_1fff44ba @ 1fff44ba ---- */

void FUN_1fff44ba(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_1fff44d8;
  *param_4 = 2;
  FUN_1fff3f74(param_1,5,iVar1 + -10);
  *param_3 = DAT_1fff44d8 + -10;
  return;
}



/* ---- FUN_1fff4522 @ 1fff4522 ---- */

undefined1 FUN_1fff4522(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint local_28;
  undefined4 uStack_24;
  char local_1c [12];
  
  piVar1 = DAT_1fff4864;
  local_28 = DAT_1fff4868;
  uStack_24 = DAT_1fff486c;
  uVar3 = *(undefined1 *)(param_1 + 0x2a);
  iVar2 = FUN_1fff8936(0,&local_28);
  if ((((iVar2 != 1) || ((local_28 & 0xff) == 0xff)) || ((local_28 & 0xff) == 0x1a)) &&
     ((*piVar1 == DAT_1fff4870 && ((short)piVar1[1] == 1)))) {
    iVar2 = FUN_1fff7528(piVar1,DAT_1fff4874,local_1c);
    if ((iVar2 < 0) || (*(char *)(param_1 + 0x2a) != '\x1a')) {
      if ((iVar2 == DAT_1fff4878) && (*(char *)(param_1 + 0x2a) == '\x1b')) {
        uVar3 = 0x1a;
      }
    }
    else if (local_1c[0] == '\x1b') {
      uVar3 = 0x1b;
    }
  }
  return uVar3;
}



/* ---- FUN_1fff4598 @ 1fff4598 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1fff4598(undefined2 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = DAT_1fff487c;
  *(undefined1 *)(param_1 + 1) = 0x4c;
  *(undefined4 *)(param_1 + 7) = _DAT_00000418;
  *(undefined1 *)(param_1 + 9) = DAT_0000043f;
  uVar1 = FUN_1fff4522(0x410);
  *(undefined1 *)((int)param_1 + 5) = uVar1;
  *(undefined4 *)(param_1 + 5) = _DAT_0000043b;
  param_1[3] = (short)((uint)_DAT_00000414 >> 0x10);
  param_1[4] = _DAT_00000414;
  *(undefined2 *)((int)param_1 + 0x13) = DAT_1fff4880;
  *(undefined1 *)((int)param_1 + 0x15) = 0x50;
  *(undefined4 *)((int)param_1 + 0x21) = _DAT_00003008;
  *(undefined1 *)((int)param_1 + 0x25) = DAT_0000302f;
  uVar1 = FUN_1fff4522(0x3000);
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x1d) = _DAT_0000302b;
  *(short *)((int)param_1 + 0x19) = (short)((uint)_DAT_00003004 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x1b) = _DAT_00003004;
  param_1[0x13] = DAT_1fff4884;
  *(undefined1 *)(param_1 + 0x14) = 0x70;
  *(undefined4 *)(param_1 + 0x1a) = _DAT_0001d008;
  *(undefined1 *)(param_1 + 0x1c) = DAT_0001d02f;
  uVar1 = FUN_1fff4522(0x1d000);
  *(undefined1 *)((int)param_1 + 0x2b) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = _DAT_0001d02b;
  param_1[0x16] = (short)((uint)_DAT_0001d004 >> 0x10);
  param_1[0x17] = _DAT_0001d004;
  return 0;
}



/* ---- FUN_1fff4646 @ 1fff4646 ---- */

int FUN_1fff4646(undefined4 param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = DAT_1fff4860;
  iVar3 = 0;
  uVar2 = DAT_1fff4860[1];
  if (param_2 < (uint)DAT_1fff4860[1]) {
    uVar2 = param_2;
  }
  *param_3 = uVar2;
  if ((piVar1[2] != 0) || (iVar3 = FUN_1fff4598(PTR_DAT_1fff4888), -1 < iVar3)) {
    piVar1[2] = 1;
    FUN_1fff7ba4(param_1,PTR_DAT_1fff4888 + *piVar1,*param_3);
    uVar2 = *param_3;
    *piVar1 = *piVar1 + uVar2;
    piVar1[1] = piVar1[1] - uVar2;
  }
  return iVar3;
}



/* ---- FUN_1fff46d8 @ 1fff46d8 ---- */

undefined4
FUN_1fff46d8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 *local_20 [4];
  
  local_20[0] = param_1;
  local_20[1] = (undefined1 *)param_2;
  local_20[2] = (undefined1 *)param_3;
  local_20[3] = (undefined1 *)param_4;
  FUN_1fff3188(local_20);
  *param_1 = 0x42;
  param_1[1] = 3;
  uVar2 = 0;
  do {
    bVar4 = *(byte *)((int)local_20 + uVar2);
    bVar1 = bVar4 >> 4;
    if (bVar1 < 10) {
      cVar5 = '0';
    }
    else {
      cVar5 = 'W';
    }
    bVar4 = bVar4 & 0xf;
    if (bVar4 < 10) {
      cVar6 = '0';
    }
    else {
      cVar6 = 'W';
    }
    uVar3 = uVar2 + 1;
    param_1[uVar2 * 4 + 2] = bVar1 + cVar5;
    param_1[uVar2 * 4 + 4] = bVar4 + cVar6;
    uVar2 = uVar3;
  } while (uVar3 < 0x10);
  return 0;
}



/* ---- FUN_1fff4722 @ 1fff4722 ---- */

int FUN_1fff4722(undefined4 param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = DAT_1fff4860;
  iVar3 = 0;
  uVar2 = DAT_1fff4860[1];
  if (param_2 < (uint)DAT_1fff4860[1]) {
    uVar2 = param_2;
  }
  *param_3 = uVar2;
  if ((piVar1[2] != 0) || (iVar3 = FUN_1fff46d8(PTR_DAT_1fff4888 + 0x39), -1 < iVar3)) {
    piVar1[2] = 1;
    FUN_1fff7ba4(param_1,PTR_DAT_1fff4888 + *piVar1 + 0x39,*param_3);
    uVar2 = *param_3;
    *piVar1 = *piVar1 + uVar2;
    piVar1[1] = piVar1[1] - uVar2;
  }
  return iVar3;
}



/* ---- FUN_1fff4776 @ 1fff4776 ---- */

undefined1 * FUN_1fff4776(undefined2 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_28 [5];
  undefined1 local_23;
  undefined1 local_22;
  
  FUN_1fff7d5a(auStack_28,0x18);
  puVar1 = (undefined1 *)FUN_1fff2886(3,1,auStack_28,0);
  if (-1 < (int)puVar1) {
    *(undefined1 *)param_1 = 0;
    *param_3 = 0;
    if ((param_2 < 4) || (*(int *)(DAT_1fff4860 + 4) != 4)) {
      puVar1 = &DAT_a0000000;
    }
    else {
      *param_1 = 0x7f2a;
      *(undefined1 *)(param_1 + 1) = local_23;
      *(undefined1 *)((int)param_1 + 3) = local_22;
      *param_3 = 4;
      puVar1 = (undefined1 *)0x0;
    }
  }
  return puVar1;
}



/* ---- FUN_1fff47ca @ 1fff47ca ---- */

undefined1 * FUN_1fff47ca(undefined1 *param_1,int param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  *param_1 = 0;
  *param_3 = 0;
  if (param_2 == 0) {
    return &DAT_a0000000;
  }
  iVar2 = FUN_1fff0568();
  if (iVar2 == DAT_1fff4890) {
    uVar1 = 2;
  }
  else {
    iVar2 = FUN_1fff0568();
    if (iVar2 == DAT_1fff4894) {
      uVar1 = 3;
    }
    else {
      iVar2 = FUN_1fff0568();
      if (iVar2 != DAT_1fff4898) {
        return &DAT_a0000000;
      }
      uVar1 = 4;
    }
  }
  *param_1 = uVar1;
  *param_3 = 1;
  return (undefined1 *)0x0;
}



/* ---- FUN_1fff48c0 @ 1fff48c0 ---- */

undefined4 FUN_1fff48c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_1fff4ad0;
  puVar2 = DAT_1fff4ad0 + 4;
  DAT_1fff4ad0[5] = puVar2;
  *puVar2 = puVar2;
  puVar1[6] = 0;
  FUN_1fff6fdc(puVar1 + 7,0x14);
  *puVar1 = 1;
  puVar1[1] = 0;
  return 0;
}



/* ---- FUN_1fff48fe @ 1fff48fe ---- */

void FUN_1fff48fe(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_2 != (int *)0x0) && (0x2000 < (uint)(DAT_1fff4ad4 + (int)param_2))) {
    uVar1 = FUN_1fff30ca(0);
    if ((*(int *)(param_1 + 0x10) != param_1 + 0x10) && (param_2[8] != 0)) {
      iVar2 = *param_2;
      piVar3 = (int *)param_2[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      param_2[8] = 0;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
    FUN_1fff30ca(uVar1);
    return;
  }
  return;
}



/* ---- FUN_1fff4944 @ 1fff4944 ---- */

void FUN_1fff4944(undefined4 param_1)

{
  FUN_1fff48fe(DAT_1fff4ad0,param_1);
  return;
}



/* ---- FUN_1fff494a @ 1fff494a ---- */

void FUN_1fff494a(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint local_28;
  int iStack_24;
  
  local_28 = param_3;
  iStack_24 = param_4;
  uVar1 = FUN_1fff30ca(0);
  FUN_1fff48fe(param_1,param_2);
  uVar2 = extraout_r1;
  if (((param_2 != 0) && (0x2000 < (uint)(DAT_1fff4ad4 + param_2))) && (*(int *)(param_1 + 4) == 0))
  {
    uVar2 = FUN_1fff30ca(0);
    *(int *)(param_2 + 0x10) = param_4;
    *(uint *)(param_2 + 8) = param_5;
    *(uint *)(param_2 + 0xc) = param_3;
    FUN_1fff4c2c(&local_28);
    *(uint *)(param_2 + 0x18) = local_28 + param_5;
    *(uint *)(param_2 + 0x1c) = iStack_24 + (uint)CARRY4(local_28,param_5);
    FUN_1fff4a72(param_1,param_2);
    FUN_1fff30ca(uVar2);
    uVar2 = extraout_r1_00;
  }
  FUN_1fff30ca(uVar1,uVar2,local_28,iStack_24);
  return;
}



/* ---- FUN_1fff49ba @ 1fff49ba ---- */

void FUN_1fff49ba(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1fff494a(DAT_1fff4ad0,param_1,param_2,param_3,param_4);
  return;
}



/* ---- FUN_1fff49cc @ 1fff49cc ---- */

undefined8 FUN_1fff49cc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0xffffffff;
  uVar3 = 0xffffffff;
  FUN_1fff30ca(0);
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)(param_1 + 0x10)) {
    uVar2 = piVar1[6];
    uVar3 = piVar1[7];
  }
  FUN_1fff30ca();
  return CONCAT44(uVar3,uVar2);
}



/* ---- FUN_1fff4a5e @ 1fff4a5e ---- */

undefined4 FUN_1fff4a5e(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  uint local_20;
  uint uStack_1c;
  
  iVar1 = DAT_1fff4ad0;
  local_20 = param_3;
  uStack_1c = param_4;
  iVar2 = FUN_1fff31e8();
  if (iVar2 == 0) {
    FUN_1fff31e2();
  }
  local_20 = 0;
  uStack_1c = 0;
  FUN_1fff4c2c(&local_20);
  uVar3 = FUN_1fff30ca(0);
  uVar10 = FUN_1fff49cc(iVar1);
  uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
  bVar9 = (uint)uVar10 <= local_20;
  iVar2 = (uStack_1c - uVar4) - (uint)!bVar9;
  if (uVar4 < uStack_1c || uStack_1c - uVar4 < (uint)bVar9) {
    piVar6 = *(int **)(iVar1 + 0x10);
    iVar5 = *piVar6;
    *(int *)(iVar1 + 0x10) = iVar5;
    *(int *)(iVar5 + 4) = iVar1 + 0x10;
    pcVar7 = (code *)piVar6[3];
    iVar8 = piVar6[4];
    piVar6[8] = 0;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
    FUN_1fff30ca(uVar3,iVar5,iVar2);
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(piVar6,iVar8);
    }
    uVar3 = 1;
  }
  else {
    FUN_1fff30ca(uVar3,uVar4,iVar2);
    uVar3 = 0;
  }
  return uVar3;
}



/* ---- FUN_1fff4a62 @ 1fff4a62 ---- */

void FUN_1fff4a62(void)

{
  FUN_1fff49cc(DAT_1fff4ad0);
  return;
}



/* ---- FUN_1fff4a72 @ 1fff4a72 ---- */

void FUN_1fff4a72(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_1fff30ca(0);
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  while( true ) {
    if ((puVar2 == (undefined4 *)(param_1 + 0x10)) || (puVar2 == (undefined4 *)0x0))
    goto LAB_1fff4ac2;
    if ((uint)param_2[7] <= (uint)puVar2[7] &&
        (uint)((uint)puVar2[6] <= (uint)param_2[6]) <= (uint)(param_2[7] - puVar2[7])) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = (int *)puVar2[1];
    *param_2 = puVar2;
    param_2[1] = piVar1;
    *piVar1 = (int)param_2;
    puVar2[1] = param_2;
    goto LAB_1fff4ab0;
  }
LAB_1fff4ac2:
  piVar1 = *(int **)(param_1 + 0x14);
  *param_2 = (undefined4 *)(param_1 + 0x10);
  param_2[1] = piVar1;
  *piVar1 = (int)param_2;
  *(undefined4 **)(param_1 + 0x14) = param_2;
LAB_1fff4ab0:
  param_2[8] = 1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  FUN_1fff30ca();
  return;
}



/* ---- FUN_1fff4ad8 @ 1fff4ad8 ---- */

void FUN_1fff4ad8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint local_18;
  uint uStack_14;
  
  local_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_1fff4a5e();
  if ((iVar1 != 0) || (iVar1 = FUN_1fff6c04(), iVar1 == 0)) {
    return;
  }
  uVar2 = FUN_1fff3144(0);
  lVar6 = FUN_1fff4a62();
  uVar4 = (uint)((ulonglong)lVar6 >> 0x20);
  uVar3 = (uint)lVar6;
  FUN_1fff4c2c(&local_18);
  iVar1 = 0;
  if (lVar6 != -1) {
    FUN_1fff4c2c(&local_18);
    if (uVar4 < uStack_14 || uStack_14 - uVar4 < (uint)(uVar3 <= local_18)) {
      FUN_1fff3144(uVar2);
      return;
    }
    uVar7 = FUN_1fff4bec((uStack_14 - uVar4) - (uint)(uVar3 > local_18),local_18 - uVar3);
    uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
    lVar6 = lVar6 - CONCAT44(uStack_14,local_18);
    uVar4 = (uint)((ulonglong)lVar6 >> 0x20);
    bVar5 = (uint)uVar7 <= (uint)lVar6;
    iVar1 = (uVar4 - uVar3) - (uint)!bVar5;
    if (uVar4 <= uVar3 && (uint)bVar5 <= uVar4 - uVar3) goto LAB_1fff4b3c;
  }
  lVar6 = FUN_1fff4bec(iVar1);
LAB_1fff4b3c:
  FUN_1fff4bfe((int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
  FUN_1fff8022();
  FUN_1fff3144(uVar2);
  FUN_1fff4bfe(0,0);
  return;
}



/* ---- FUN_1fff4b5a @ 1fff4b5a ---- */

void FUN_1fff4b5a(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* ---- FUN_1fff4b6e @ 1fff4b6e ---- */

void FUN_1fff4b6e(undefined1 *param_1,undefined1 param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return;
}



/* ---- FUN_1fff4b82 @ 1fff4b82 ---- */

undefined4 FUN_1fff4b82(void)

{
  FUN_1fff30c0();
  return DAT_1fff4b8c;
}



/* ---- FUN_1fff4b90 @ 1fff4b90 ---- */

void FUN_1fff4b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  piVar1 = DAT_1fff4d48;
  if (*DAT_1fff4d48 == 0) {
    local_10 = param_3;
    uStack_c = param_4;
    FUN_1fff2ea4(&local_10);
    uVar2 = FUN_1fff788a(local_10,uStack_c,10,0);
    *(undefined8 *)(piVar1 + 2) = uVar2;
    FUN_1fff664a(piVar1 + 6);
    *piVar1 = 1;
  }
  return;
}



/* ---- FUN_1fff4bbe @ 1fff4bbe ---- */

void FUN_1fff4bbe(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  piVar1 = DAT_1fff4d48;
  if (*DAT_1fff4d48 == 1) {
    uVar2 = FUN_1fff3144(0);
    uVar3 = piVar1[2];
    piVar1[2] = uVar3 + param_1;
    piVar1[3] = piVar1[3] + param_2 + (uint)CARRY4(uVar3,param_1);
    FUN_1fff3144(uVar2);
    return;
  }
  return;
}



/* ---- FUN_1fff4bec @ 1fff4bec ---- */

undefined8 FUN_1fff4bec(void)

{
  return *(undefined8 *)(DAT_1fff4d48 + 0x20);
}



/* ---- FUN_1fff4bfe @ 1fff4bfe ---- */

void FUN_1fff4bfe(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 extraout_r1;
  
  FUN_1fff66fe(DAT_1fff4d48 + 0x18);
  if (param_1 != 0 || param_2 != 0) {
    FUN_1fff6732(DAT_1fff4d48 + 0x18,extraout_r1,param_1,param_2);
    puVar1 = *(uint **)(DAT_1fff6864 + (uint)*(byte *)(DAT_1fff4d48 + 0x18) * 4);
    *puVar1 = *puVar1 | 1;
    return;
  }
  return;
}



/* ---- FUN_1fff4c2c @ 1fff4c2c ---- */

void FUN_1fff4c2c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_3;
  uStack_14 = param_4;
  FUN_1fff2ea4(&local_18);
  lVar4 = FUN_1fff788a(local_18,uStack_14,10,0);
  iVar1 = DAT_1fff4d48;
  lVar4 = lVar4 - *(longlong *)(DAT_1fff4d48 + 8);
  uVar3 = (uint)((ulonglong)lVar4 >> 0x20);
  *(longlong *)param_1 = lVar4;
  uVar2 = *(uint *)(iVar1 + 0x14);
  if (uVar3 <= uVar2 && (uint)(*(uint *)(iVar1 + 0x10) <= (uint)lVar4) <= uVar3 - uVar2) {
    *param_1 = *(uint *)(iVar1 + 0x10);
    param_1[1] = uVar2;
  }
  uVar2 = param_1[1];
  *(uint *)(iVar1 + 0x10) = *param_1;
  *(uint *)(iVar1 + 0x14) = uVar2;
  return;
}



/* ---- FUN_1fff4c6a @ 1fff4c6a ---- */

undefined8 FUN_1fff4c6a(uint param_1,int param_2,uint param_3,int param_4)

{
  int extraout_r1;
  int iVar1;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  
  local_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  iStack_14 = param_4;
  if (*DAT_1fff4d48 == 0) {
    FUN_1fff4b90();
  }
  if (param_1 < 0xc9) {
    FUN_1fff3234(param_1);
    return CONCAT44(iStack_1c,local_20);
  }
  FUN_1fff4c2c(&local_20);
  iVar1 = extraout_r1;
  do {
    FUN_1fff4c2c(&local_18,iVar1);
    iVar1 = (local_18 - local_20) - param_1;
  } while (iStack_14 - iStack_1c == (uint)(local_18 < local_20) &&
           (uint)(param_1 <= local_18 - local_20) <=
           (iStack_14 - iStack_1c) - (uint)(local_18 < local_20));
  return CONCAT44(iStack_1c,local_20);
}



/* ---- FUN_1fff4d20 @ 1fff4d20 ---- */

int FUN_1fff4d20(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  int iStack_14;
  
  local_18 = param_3;
  iStack_14 = param_4;
  uVar1 = FUN_1fff3144(0);
  FUN_1fff4c2c(&local_18);
  iVar2 = *param_1;
  *param_1 = local_18;
  param_1[1] = iStack_14;
  iVar2 = local_18 - iVar2;
  FUN_1fff3144(uVar1);
  return iVar2;
}



/* ---- FUN_1fff4de0 @ 1fff4de0 ---- */

void FUN_1fff4de0(void)

{
  *(undefined4 *)(DAT_1fff5148 + 0x1c) = 1;
  FUN_1fff4944(DAT_1fff515c);
  return;
}



/* ---- FUN_1fff4dec @ 1fff4dec ---- */

undefined4 FUN_1fff4dec(int param_1,int param_2)

{
  if (((*(int *)(DAT_1fff5148 + 0x18) == 0) && (*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4)))
     && ((*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4) ||
         ((*(uint *)(param_2 + 8) <= *(uint *)(param_1 + 8) &&
          ((*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8) ||
           (*(uint *)(param_2 + 0x2b) <= *(uint *)(param_1 + 0x2b))))))))) {
    return 0;
  }
  return 1;
}



/* ---- FUN_1fff4e1a @ 1fff4e1a ---- */

undefined1 * FUN_1fff4e1a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = FUN_1fff76a4(0,param_1,*(undefined4 *)(param_1 + 0x10));
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar1 != iVar2) {
    return &DAT_a0000000;
  }
  return (undefined1 *)0x0;
}



/* ---- FUN_1fff4e3e @ 1fff4e3e ---- */

void FUN_1fff4e3e(int param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = DAT_1fff5148;
  iVar8 = DAT_1fff5154 + 8;
  do {
    if (*(uint *)(param_1 + 0xf) <= *(uint *)(iVar1 + 0xc)) {
      return;
    }
    iVar2 = FUN_1fff0568();
    if (iVar2 == DAT_1fff5144) {
      psVar3 = (short *)(param_1 + 0x1b + *(int *)(iVar1 + 0xc) * 10);
      if (*psVar3 == -0x4000) {
        iVar4 = *(int *)(psVar3 + 1) + param_1;
        iVar2 = FUN_1fff4e1a(iVar4);
        if (iVar2 < 0) {
          *(int *)(iVar1 + 8) = DAT_1fff5154 + 7;
LAB_1fff4ef4:
          FUN_1fff4f84(0,param_1);
        }
        else {
          iVar2 = FUN_1fff4dec(0x3000,iVar4);
          if ((iVar2 != 0) || (iVar2 = FUN_1fff0538(), iVar2 == 0)) {
            uVar5 = 0;
            do {
              FUN_1fff8a7e(uVar5 + 0x3000,1);
              FUN_1fff29b8(uVar5 + 0x3000,iVar4 + uVar5,0x1000);
              uVar5 = uVar5 + 0x1000;
            } while (uVar5 < 0x18000);
          }
        }
      }
      else if (*psVar3 == -0x3fff) {
        iVar4 = *(int *)(psVar3 + 1);
        iVar2 = FUN_1fff4e1a(iVar4 + param_1);
        if (iVar2 < 0) {
          *(int *)(iVar1 + 8) = iVar8;
          goto LAB_1fff4ef4;
        }
        iVar2 = FUN_1fff4dec(0x1d000,iVar4 + param_1);
        if (iVar2 != 0) {
          FUN_1fff058e(5);
        }
      }
    }
    else {
      iVar2 = FUN_1fff0568();
      if ((iVar2 == DAT_1fff5150) &&
         (psVar3 = (short *)(param_1 + 0x1b + *(int *)(iVar1 + 0xc) * 10),
         iVar2 = *(int *)(psVar3 + 1) + param_1, *psVar3 == -0x3fff)) {
        iVar4 = FUN_1fff4e1a(iVar2);
        uVar5 = DAT_1fff5160;
        if (-1 < iVar4) {
          uVar7 = *(uint *)(iVar2 + 0x10);
          uVar6 = 0;
          do {
            FUN_1fff8a7e(uVar6 + 0x1d000,1);
            if (uVar6 < uVar7) {
              FUN_1fff29b8(uVar6 + 0x1d000,iVar2 + uVar6,0x1000);
            }
            FUN_1fff4ad8();
            uVar6 = uVar6 + 0x1000;
          } while (uVar6 < uVar5);
          return;
        }
        *(int *)(iVar1 + 8) = iVar8;
        FUN_1fff4f84(0,param_1);
        return;
      }
    }
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  } while( true );
}



/* ---- FUN_1fff4f84 @ 1fff4f84 ---- */

void FUN_1fff4f84(undefined4 param_1,short *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_1fff5148;
  local_18 = 0;
  local_14 = 0;
  if ((*param_2 == -0x3ca1) && (iVar3 = FUN_1fff72ce(param_2), -1 < iVar3)) {
    iVar3 = FUN_1fff8936(0,&local_18);
    if ((iVar3 == 0) || (bVar2 = (byte)local_18, (byte)local_18 == 0xff)) {
      bVar2 = 0x1a;
      local_18 = CONCAT31(local_18._1_3_,0x1a);
    }
    if ((uint)bVar2 != *(uint *)((int)param_2 + 3)) {
      iVar3 = DAT_1fff5154 + 0xf;
      goto LAB_1fff4ff0;
    }
    if (-1 < *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0x14) == 0) {
        iVar3 = FUN_1fff0568();
        if (iVar3 == DAT_1fff5144) {
          iVar3 = FUN_1fff52b4(param_2);
          puVar4 = DAT_1fff5164;
          if (-1 < iVar3) {
            uVar5 = 0;
            iVar3 = DAT_1fff515c + -0x78;
            *(undefined4 *)(iVar1 + 0xc) = 0;
            goto LAB_1fff5022;
          }
          goto LAB_1fff4ff0;
        }
      }
      if (*(int *)(iVar1 + 0x20) != 0) {
        iVar3 = DAT_1fff5154 + 0x10;
        goto LAB_1fff4ff0;
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_1fff4e3e(param_2);
    }
  }
  else {
    iVar3 = DAT_1fff5154 + 9;
LAB_1fff4ff0:
    *(int *)(iVar1 + 8) = iVar3;
  }
  uVar5 = 5000;
  param_2 = (short *)0x0;
  puVar4 = &LAB_1fff4d50_1;
  iVar3 = DAT_1fff515c + -0x50;
LAB_1fff5022:
  FUN_1fff49ba(iVar3,puVar4,param_2,uVar5);
  return;
}



/* ---- FUN_1fff524c @ 1fff524c ---- */

undefined4 FUN_1fff524c(void)

{
  FUN_1fff058e(4);
  *(undefined4 *)(PTR_DAT_1fff5344 + 8) = DAT_1fff535c;
  FUN_1fff49ba(DAT_1fff5350 + 0x90,&LAB_1fff4d50_1,0,5000);
  return 0;
}



/* ---- FUN_1fff5270 @ 1fff5270 ---- */

undefined4 FUN_1fff5270(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = DAT_1fff5354;
  puVar1 = PTR_DAT_1fff5344;
  *(undefined4 *)PTR_DAT_1fff5344 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(int *)(puVar1 + 8) = iVar2 + -6;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  FUN_1fff0742(DAT_1fff5350 + -0x18,&LAB_1fff5234_1,0);
  return 0;
}



/* ---- FUN_1fff52a2 @ 1fff52a2 ---- */

void FUN_1fff52a2(void)

{
  *(int *)(PTR_DAT_1fff5344 + 8) = DAT_1fff535c + 1;
  FUN_1fff4f84();
  return;
}



/* ---- FUN_1fff52b4 @ 1fff52b4 ---- */

longlong FUN_1fff52b4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = param_1 + 0x1b;
  uVar3 = 0;
  iVar1 = FUN_1fff0568();
  if (iVar1 == DAT_1fff5360) {
    for (; (uVar3 < *(uint *)(param_1 + 0xf) && (*(short *)(iVar2 + uVar3 * 10) != -0x3fff));
        uVar3 = uVar3 + 1) {
    }
  }
  while( true ) {
    if (*(uint *)(param_1 + 0xf) <= uVar4) {
      return 0xc00200000000;
    }
    if (*(short *)(iVar2 + uVar4 * 10) == -0x3ffe) break;
    uVar4 = uVar4 + 1;
  }
  return (ulonglong)(*(uint *)(iVar2 + uVar4 * 10 + 6) >> 3) << 0x20;
}



/* ---- FUN_1fff53b8 @ 1fff53b8 ---- */

int FUN_1fff53b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  uint uVar7;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_20;
  
  FUN_1fff5ecc();
  uVar1 = DAT_1fff5668;
  FUN_1fff4c2c(&local_68);
  piVar2 = DAT_1fff566c;
  iVar6 = extraout_r1;
  while (*piVar2 == 0) {
    FUN_1fff4ad8(0,iVar6);
    FUN_1fff4c2c(&local_60);
    iVar6 = (local_60 - local_68) - uVar1;
    if (iStack_5c - iStack_64 != (uint)(local_60 < local_68) ||
        (iStack_5c - iStack_64) - (uint)(local_60 < local_68) < (uint)(uVar1 <= local_60 - local_68)
       ) {
      return DAT_1fff5670;
    }
  }
  if (*DAT_1fff5674 == 0) {
    return DAT_1fff5670 + -0x10;
  }
  FUN_1fff0750();
  uVar1 = DAT_1fff5678;
  FUN_1fff4c2c(&local_68);
  FUN_1fff4ad8();
  iVar6 = DAT_1fff5664;
  do {
    iVar3 = FUN_1fff074c(DAT_1fff567c,param_3);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar6 + 0x14) = 1;
      *(undefined4 *)(iVar6 + 4) = 0;
LAB_1fff5472:
      FUN_1fff4598(auStack_58);
      FUN_1fff0688(0x38,extraout_r1_00,local_2c,uStack_28);
      FUN_1fff0688(0x39,extraout_r1_01,local_24,local_20);
      FUN_1fff068c(6);
      iVar6 = FUN_1fff524c();
      return iVar6;
    }
    do {
      FUN_1fff4c2c(&local_60);
      uVar7 = local_60 - local_68;
      uVar4 = (iStack_5c - iStack_64) - (uint)(local_60 < local_68);
      iVar5 = uVar4 - (uVar1 > uVar7);
      if (uVar4 != 0 || uVar4 < (uVar1 <= uVar7)) {
        return DAT_1fff5670 + 1;
      }
      if ((-1 < iVar3) && (iVar5 = 0, *(int *)(iVar6 + 0x14) != 0)) {
        if (*(int *)(iVar6 + 4) < 0) {
          return *(int *)(iVar6 + 4);
        }
        goto LAB_1fff5472;
      }
      FUN_1fff4ad8(iVar5,uVar7 - uVar1);
    } while (-1 < iVar3);
  } while( true );
}



/* ---- FUN_1fff549a @ 1fff549a ---- */

int FUN_1fff549a(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_1fff5664;
  if (DAT_1fff5680 < param_1) {
    return DAT_1fff5670 + 5;
  }
  *(uint *)(DAT_1fff5664 + 8) = param_1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_1fff4de0();
  FUN_1fff49ba(DAT_1fff568c,DAT_1fff5688,0,DAT_1fff5684);
  return 0;
}



/* ---- FUN_1fff56a8 @ 1fff56a8 ---- */

undefined4 FUN_1fff56a8(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(DAT_1fff5a14 + param_1 * 4);
  }
  return uVar1;
}



/* ---- FUN_1fff56b8 @ 1fff56b8 ---- */

undefined4 * FUN_1fff56b8(undefined4 param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_r2;
  undefined4 *extraout_r3;
  undefined4 uVar8;
  char *extraout_r3_00;
  code *pcVar9;
  byte bVar10;
  undefined4 unaff_r4;
  undefined4 uVar11;
  int *piVar12;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  ushort *puVar13;
  short *psVar14;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int iVar15;
  undefined4 unaff_lr;
  undefined8 uVar16;
  
  iVar2 = DAT_1fff5a14;
  puVar13 = *(ushort **)(param_2 + 4);
  uVar6 = *(uint *)(param_2 + 8);
  if (*(int *)(DAT_1fff5a14 + -0x10) == 0) {
    *(undefined4 *)(DAT_1fff5a14 + -0x10) = 1;
    uVar7 = FUN_1fff56a8();
    *(undefined4 *)(iVar2 + -0xc) = uVar7;
    uVar6 = extraout_r2;
    param_2 = extraout_r3_00;
  }
  else if (**(char **)(DAT_1fff5a14 + -0xc) != *param_2) {
    iVar2 = FUN_1fff56a8();
    *(undefined4 *)(iVar2 + 0x70) = 1;
    uVar7 = extraout_r3[1];
    uVar8 = extraout_r3[2];
    uVar11 = extraout_r3[3];
    *(undefined4 *)(iVar2 + 0x74) = *extraout_r3;
    *(undefined4 *)(iVar2 + 0x78) = uVar7;
    *(undefined4 *)(iVar2 + 0x7c) = uVar8;
    *(undefined4 *)(iVar2 + 0x80) = uVar11;
    return (undefined4 *)(iVar2 + 0x74);
  }
  puVar3 = *(undefined4 **)(iVar2 + -0xc);
  puVar3[0x21] = *(undefined4 *)(param_2 + 0xc);
  puVar4 = (undefined4 *)(uint)*(byte *)(puVar3 + 3);
  if (puVar4 == (undefined4 *)0xa0) {
    FUN_1fff5c10(puVar3);
    puVar4 = DAT_1fff5e70;
    piVar12 = puVar3 + 4;
    if ((*(byte *)(puVar3 + 5) & 1) == 0) {
      if ((puVar13 != (ushort *)0x0) && (uVar6 != 0)) {
        iVar15 = 0;
        iVar2 = *puVar13 - 0x2ef9;
        if (iVar2 == 0) {
          FUN_1fff5884(puVar13[1],piVar12);
          iVar2 = extraout_r1;
          if (*piVar12 == 0) {
            if ((int)((uint)(byte)puVar13[1] << 0x18) < 0) {
              *(undefined1 *)(puVar3 + 5) = 0x14;
              uVar7 = 0x80;
            }
            else {
              *(undefined1 *)(puVar3 + 5) = 0x18;
              uVar7 = 0;
            }
            uVar16 = FUN_1fff5846(uVar7);
            iVar2 = (int)((ulonglong)uVar16 >> 0x20);
            *piVar12 = (int)uVar16;
            if ((int)uVar16 == 0) {
              iVar15 = DAT_1fff5e98 + -1;
            }
          }
        }
        else {
          iVar15 = DAT_1fff5e98 + 1;
        }
        psVar14 = (short *)*piVar12;
        if ((-1 < iVar15) && (psVar14 != (short *)0x0)) {
          if (*psVar14 != -0x2d7d) {
            FUN_1fff0688(0x437,iVar2,*psVar14,0,unaff_r4,unaff_r5,unaff_r6);
            FUN_1fff0688(0x438,extraout_r1_00,*(undefined1 *)puVar3,0);
          }
          puVar3[2] = *(undefined4 *)(puVar13 + 2);
          if (*(int *)(psVar14 + 2) != 0) {
            if (((int)((uint)*(byte *)(puVar3 + 5) << 0x1b) < 0) &&
               (uVar6 = *(uint *)(puVar13 + 2), 0xe28 < uVar6)) {
              *puVar4 = 0;
            }
            else {
              *(byte *)(puVar3 + 5) = *(byte *)(puVar3 + 5) | 1;
              iVar2 = (**(code **)(psVar14 + 2))(*(undefined4 *)(puVar13 + 2),puVar13 + 4);
              bVar10 = *(byte *)(puVar3 + 5);
              bVar1 = (byte)(bVar10 & 0xfffffffe);
              *(byte *)(puVar3 + 5) = bVar1;
              if ((int)((bVar10 & 0xfffffffe) << 0x1e) < 0) {
                *(byte *)(puVar3 + 5) = bVar1 & 0xfd;
              }
              else {
                if (-1 < iVar2) goto LAB_1fff5e34;
                *puVar4 = 0;
              }
              uVar6 = *(uint *)(puVar13 + 2);
            }
            uVar7 = FUN_1fff5ef4(piVar12,uVar6);
            goto LAB_1fff5e2a;
          }
LAB_1fff5e34:
          FUN_1fff5c10(puVar3);
          *(undefined1 *)(puVar3 + 3) = 0xa2;
          iVar2 = (uint)*(byte *)(puVar3 + 5) * 0x20000000;
          if (-1 < (int)((uint)*(byte *)(puVar3 + 5) << 0x1c)) {
            if (-1 < iVar2) {
              return puVar3;
            }
            puVar3[1] = 0;
            *(undefined1 *)((int)puVar3 + 0xe) = 0xc0;
            puVar3 = (undefined4 *)FUN_1fff5cba();
            return puVar3;
          }
          if (iVar2 < 0) {
            return puVar3;
          }
          puVar3[1] = 1;
          *(undefined1 *)((int)puVar3 + 0xd) = 0xb0;
          if (puVar3[2] != 0) {
            puVar3 = (undefined4 *)FUN_1fff5ca6(*(undefined1 *)puVar3);
            return puVar3;
          }
          uVar6 = 0;
          puVar13 = (ushort *)0x0;
          goto LAB_1fff5d08;
        }
      }
      *puVar4 = 0;
    }
    uVar7 = 1;
LAB_1fff5e2a:
    puVar3 = (undefined4 *)FUN_1fff5b6a(puVar3,uVar7);
    return puVar3;
  }
  if (puVar4 != (undefined4 *)0xa2) {
    if (puVar4 == (undefined4 *)0xa1) {
      puVar3 = (undefined4 *)FUN_1fff5b6a(puVar3,1);
      return puVar3;
    }
    return puVar4;
  }
  FUN_1fff5c10(puVar3);
  if (puVar3[1] == 0) {
    puVar3 = (undefined4 *)FUN_1fff5cba();
    return puVar3;
  }
LAB_1fff5d08:
  puVar4 = (undefined4 *)(uint)*(byte *)((int)puVar3 + 0xd);
  if (puVar4 == (undefined4 *)0xb2) {
    FUN_1fff5b04(0xe1,*(undefined1 *)puVar3);
    FUN_1fff5a48(*(undefined1 *)puVar3);
    FUN_1fff5ca6(*(undefined1 *)puVar3);
    bVar10 = 0;
    do {
      iVar2 = FUN_1fff56a8(bVar10);
      if (*(undefined4 **)(iVar2 + 0x70) != (undefined4 *)0x0) {
        if (bVar10 == 4) {
          return *(undefined4 **)(iVar2 + 0x70);
        }
        iVar2 = FUN_1fff56a8(bVar10);
        *(undefined4 *)(iVar2 + 0x70) = 0;
        uVar7 = FUN_1fff5942(bVar10);
        puVar3 = (undefined4 *)FUN_1fff49ba(uVar7,DAT_1fff5e94,iVar2 + 0x74,1);
        return puVar3;
      }
      bVar10 = bVar10 + 1;
    } while (bVar10 < 4);
    return (undefined4 *)0x0;
  }
  if (puVar4 != (undefined4 *)0xb0) {
    return puVar4;
  }
  pcVar9 = *(code **)(puVar3[4] + 8);
  *(byte *)(puVar3 + 5) = *(byte *)(puVar3 + 5) | 1;
  puVar4 = (undefined4 *)
           (*pcVar9)(puVar13,uVar6,0,pcVar9,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  bVar10 = *(byte *)(puVar3 + 5);
  bVar1 = (byte)(bVar10 & 0xfffffffe);
  *(byte *)(puVar3 + 5) = bVar1;
  if ((int)((bVar10 & 0xfffffffe) << 0x1e) < 0) {
    *(byte *)(puVar3 + 5) = bVar1 & 0xfd;
    return DAT_1fff6074;
  }
  FUN_1fff5c10(puVar3);
  uVar5 = puVar3[2];
  if (uVar5 < uVar6) {
    puVar4 = (undefined4 *)((int)DAT_1fff6074 + -0xf);
  }
  else {
    uVar5 = uVar5 - uVar6;
    puVar3[2] = uVar5;
    if (-1 < (int)puVar4) {
      if (uVar5 != 0) {
        FUN_1fff5ca6(*(undefined1 *)puVar3);
        return puVar4;
      }
      goto LAB_1fff6028;
    }
  }
  if (uVar5 != 0) {
    FUN_1fff5b6a(puVar3,1);
    return puVar4;
  }
LAB_1fff6028:
  FUN_1fff5f8e(puVar3,puVar4);
  *(undefined1 *)((int)puVar3 + 0xd) = 0xb2;
  return puVar4;
}



/* ---- FUN_1fff56fe @ 1fff56fe ---- */

undefined4 FUN_1fff56fe(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  puVar3 = DAT_1fff5a1c;
  DAT_1fff5a1c[1] = DAT_1fff5a18;
  *puVar3 = *DAT_1fff5a20;
  if (param_1 == 0) {
    puVar3[5] = DAT_1fff5a2c;
    puVar3[4] = *DAT_1fff5a30;
    iVar2 = FUN_1fff0754();
    if (iVar2 != 0) {
      puVar3[5] = 0;
      puVar3[4] = 0;
    }
    puVar3[7] = 0;
    uVar1 = DAT_1fff5a34;
    puVar3[6] = 0;
    puVar3[3] = uVar1;
    puVar3[2] = *DAT_1fff5a38;
  }
  else {
    puVar3[7] = DAT_1fff5a24;
    uVar1 = *DAT_1fff5a28;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[6] = uVar1;
    puVar3[4] = 0;
  }
  FUN_1fff5ad8();
  iVar2 = DAT_1fff5a14;
  puVar3 = DAT_1fff5a1c + -0x22;
  *(undefined4 *)(DAT_1fff5a14 + -0x10) = 0;
  *(undefined4 **)(iVar2 + -0xc) = puVar3;
  iVar2 = DAT_1fff5a14;
  uVar5 = 0;
  do {
    puVar3 = DAT_1fff5a1c;
    puVar4 = *(undefined1 **)(iVar2 + uVar5 * 4);
    *puVar4 = (char)uVar5;
    *(undefined4 *)(puVar4 + 0x70) = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined4 **)(puVar4 + 0x18) = puVar3 + 8;
    puVar4[0x14] = 0;
    FUN_1fff5a48(uVar5);
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  FUN_1fff0794(0x1fff56b9);
  FUN_1fff06f2(0x1fff56b9);
  FUN_1fff070c(0x1fff56b9);
  return 0;
}



/* ---- FUN_1fff57b8 @ 1fff57b8 ---- */

undefined4 FUN_1fff57b8(undefined4 param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_1fff5a14;
  puVar4 = (ushort *)(DAT_1fff5a14 + -0x14);
  uVar5 = 0;
  uVar3 = (uint)*(ushort *)(DAT_1fff5a14 + -0x12) - (uint)*puVar4;
  if ((uVar3 & 0xffff) <= param_2) {
    param_2 = uVar3;
  }
  param_2 = param_2 & 0xffff;
  FUN_1fff7ba4(param_1,DAT_1fff5a3c + (uint)*puVar4,param_2);
  *param_3 = param_2;
  uVar1 = *puVar4;
  *puVar4 = (ushort)(uVar1 + param_2);
  if ((uint)*(ushort *)(iVar2 + -0x12) == (uVar1 + param_2 & 0xffff)) {
    uVar5 = *(undefined4 *)(iVar2 + -8);
  }
  return uVar5;
}



/* ---- FUN_1fff57fa @ 1fff57fa ---- */

undefined4 FUN_1fff57fa(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_1fff5a14;
  puVar4 = (ushort *)(DAT_1fff5a14 + -0x14);
  uVar5 = 0;
  if (*(ushort *)(DAT_1fff5a14 + -0x12) <= param_2) {
    param_2 = (uint)*(ushort *)(DAT_1fff5a14 + -0x12);
  }
  FUN_1fff7ba4(DAT_1fff5a3c + (uint)*puVar4,param_1,param_2 & 0xffff);
  uVar2 = (uint)*puVar4 + (param_2 & 0xffff);
  uVar3 = uVar2 & 0xffff;
  *puVar4 = (ushort)uVar2;
  if (uVar3 == *(ushort *)(iVar1 + -0x12)) {
    if (*(code **)(iVar1 + -4) == (code *)0x0) {
      uVar5 = *(undefined4 *)(iVar1 + -8);
    }
    else {
      uVar5 = (**(code **)(iVar1 + -4))(DAT_1fff5a3c,uVar3,param_3);
    }
    *(undefined4 *)(iVar1 + -4) = 0;
  }
  return uVar5;
}



/* ---- FUN_1fff5846 @ 1fff5846 ---- */

int FUN_1fff5846(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    iVar3 = *(int *)(DAT_1fff5a1c + uVar1 * 8 + 4);
    for (uVar2 = 0; uVar2 < *(uint *)(DAT_1fff5a1c + uVar1 * 8); uVar2 = uVar2 + 1) {
      if (*(ushort *)(iVar3 + uVar2 * 0xc) == param_1) {
        return iVar3 + uVar2 * 0xc;
      }
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return 0;
}



/* ---- FUN_1fff5884 @ 1fff5884 ---- */

void FUN_1fff5884(int param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  
  *(undefined1 *)(param_2 + 1) = 0;
  iVar1 = FUN_1fff5846(param_1);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    if ((param_1 == 0x3385) || (param_1 == 0x748d)) {
      bVar2 = *(byte *)(param_2 + 1) | 8;
    }
    else if ((param_1 == 0xc31f) || (param_1 == 0xc322)) {
      bVar2 = *(byte *)(param_2 + 1) | 4;
    }
    else {
      if (param_1 << 0x18 < 0) {
        bVar2 = 4;
      }
      else {
        bVar2 = 8;
      }
      bVar2 = *(byte *)(param_2 + 1) | bVar2;
    }
    *(byte *)(param_2 + 1) = bVar2;
    if ((*(int *)(iVar1 + 8) == 0x1fff57fb) || (*(int *)(iVar1 + 8) == 0x1fff57b9)) {
      *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x10;
    }
  }
  return;
}



/* ---- FUN_1fff5942 @ 1fff5942 ---- */

int FUN_1fff5942(void)

{
  int iVar1;
  
  iVar1 = FUN_1fff56a8();
  return iVar1 + 0x20;
}



/* ---- FUN_1fff594c @ 1fff594c ---- */

undefined4 FUN_1fff594c(uint param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = DAT_1fff5a14;
  if (0xe28 < param_1) {
    return 0;
  }
  puVar2 = (undefined2 *)(DAT_1fff5a14 + -0x14);
  *(undefined4 *)(DAT_1fff5a14 + -8) = 0;
  *(short *)(iVar1 + -0x12) = (short)param_1;
  *puVar2 = 0;
  return DAT_1fff5a3c;
}



/* ---- FUN_1fff5970 @ 1fff5970 ---- */

undefined4 FUN_1fff5970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  
  iVar1 = FUN_1fff594c();
  if (iVar1 != 0) {
    FUN_1fff7d16(iVar1,extraout_r3);
    *(undefined4 *)(DAT_1fff5a14 + -8) = param_2;
  }
  return DAT_1fff5a3c;
}



/* ---- FUN_1fff5a48 @ 1fff5a48 ---- */

void FUN_1fff5a48(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_1fff56a8();
  FUN_1fff5942(param_1);
  FUN_1fff4944();
  FUN_1fff4944(iVar2 + 0x48);
  *(undefined1 *)(iVar2 + 0xc) = 0xa0;
  FUN_1fff5edc(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  puVar1 = DAT_1fff5e6c;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  if (*(byte *)*puVar1 == param_1) {
    *DAT_1fff5e70 = 0;
  }
  else if (*DAT_1fff5e70 == 0) {
    FUN_1fff5edc((byte *)*puVar1 + 0x10);
    return;
  }
  return;
}



/* ---- FUN_1fff5a9a @ 1fff5a9a ---- */

void FUN_1fff5a9a(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_1fff5a48(0);
    }
    if (*(char *)(param_1 + 0x1c) == '\a') {
      FUN_1fff5a48(0);
      return;
    }
  }
  return;
}



/* ---- FUN_1fff5ad8 @ 1fff5ad8 ---- */

undefined4 FUN_1fff5ad8(void)

{
  FUN_1fff0702(DAT_1fff5e78,DAT_1fff5e74,0);
  FUN_1fff0704(DAT_1fff5e78,1);
  FUN_1fff0708(DAT_1fff5e78 + 0x18,DAT_1fff5e7c,0);
  FUN_1fff070a(DAT_1fff5e78 + 0x18);
  return 0;
}



/* ---- FUN_1fff5b04 @ 1fff5b04 ---- */

void FUN_1fff5b04(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0xe1) {
    if (param_2 == 0) {
      uVar1 = 0x42e;
    }
    else if (param_2 == 1) {
      uVar1 = 0x42f;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      uVar1 = 0x430;
    }
  }
  else if (param_1 == 0xe2) {
    if (param_2 == 0) {
      uVar1 = 0x431;
    }
    else if (param_2 == 1) {
      uVar1 = 0x432;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      uVar1 = 0x433;
    }
  }
  else {
    if (param_1 != 0xe3) {
      return;
    }
    if (param_2 == 0) {
      uVar1 = 0x434;
    }
    else if (param_2 == 1) {
      uVar1 = 0x435;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      uVar1 = 0x436;
    }
  }
  FUN_1fff068c(uVar1);
  return;
}



/* ---- FUN_1fff5b6a @ 1fff5b6a ---- */

uint FUN_1fff5b6a(byte *param_1,int param_2)

{
  uint uVar1;
  
  param_1[0xc] = 0xa1;
  FUN_1fff5b04(0xe2,*param_1);
  FUN_1fff4944(param_1 + 0x48);
  if ((param_1[0x14] & 1) == 0) {
    param_1[0x14] = param_1[0x14] & 0xfd;
  }
  uVar1 = (uint)*param_1;
  if (uVar1 != 0) {
    if ((uVar1 != 1) && (uVar1 != 2)) {
      if (uVar1 == 3) {
        return 0;
      }
      return uVar1;
    }
    return 0;
  }
  if (param_2 != 1) {
    uVar1 = FUN_1fff3fa4(0,0x91,1);
    return uVar1;
  }
  uVar1 = FUN_1fff3fa4(0,0x12,1);
  return uVar1;
}



/* ---- FUN_1fff5bca @ 1fff5bca ---- */

void FUN_1fff5bca(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  *DAT_1fff5e70 = 0;
  FUN_1fff5b04(0xe3,*param_2);
  param_2[0x14] = param_2[0x14] | 2;
  if (param_2[0xc] == -0x60) {
    uVar1 = FUN_1fff5ef4(param_2 + 0x10,*(undefined4 *)(param_2 + 8));
  }
  else if ((param_2[0xc] == -0x5e) && (*(int *)(param_2 + 4) == 0)) {
    uVar1 = 0;
  }
  FUN_1fff5b6a(param_2,uVar1);
  return;
}



/* ---- FUN_1fff5c10 @ 1fff5c10 ---- */

void FUN_1fff5c10(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1fff5e84;
  if (*param_1 != '\x02') {
    uVar1 = DAT_1fff5e80;
  }
  FUN_1fff49ba(param_1 + 0x48,DAT_1fff5e88,param_1,uVar1);
  if ((code *)*DAT_1fff5e8c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1fff5c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_1fff5e8c)();
  return;
}



/* ---- FUN_1fff5c3c @ 1fff5c3c ---- */

undefined4 FUN_1fff5c3c(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1fff5c10();
  if (*param_1 < 4) {
    (**(code **)(DAT_1fff5e90 + (uint)*param_1 * 0xc + 4))
              (param_2,param_3,*(undefined4 *)(param_1 + 0x84));
  }
  return 0;
}



/* ---- FUN_1fff5ca6 @ 1fff5ca6 ---- */

void FUN_1fff5ca6(uint param_1)

{
  if (param_1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x1fff5cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_1fff5e90 + param_1 * 0xc + 8))();
    return;
  }
  return;
}



/* ---- FUN_1fff5cba @ 1fff5cba ---- */

void FUN_1fff5cba(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  iVar2 = DAT_1fff5e8c;
  cVar1 = param_1[0xe];
  if (cVar1 != -0x3e) {
    if (cVar1 == -0x3f) {
      uVar4 = FUN_1fff5f8e(param_1,*(undefined4 *)(DAT_1fff5e8c + 4));
      *(undefined4 *)(iVar2 + 4) = uVar4;
      param_1[0xe] = 0xc2;
      return;
    }
    if ((cVar1 == -0x40) && (iVar3 = FUN_1fff5f0a(param_1), iVar3 != DAT_1fff5e98)) {
      *(int *)(iVar2 + 4) = iVar3;
    }
    return;
  }
  FUN_1fff5b04(0xe1,*param_1);
  FUN_1fff5a48(*param_1);
  FUN_1fff5ca6(*param_1);
  bVar5 = 0;
  do {
    iVar2 = FUN_1fff56a8(bVar5);
    if (*(int *)(iVar2 + 0x70) != 0) {
      if (bVar5 == 4) {
        return;
      }
      iVar2 = FUN_1fff56a8(bVar5);
      *(undefined4 *)(iVar2 + 0x70) = 0;
      uVar4 = FUN_1fff5942(bVar5);
      FUN_1fff49ba(uVar4,DAT_1fff5e94,iVar2 + 0x74,1);
      return;
    }
    bVar5 = bVar5 + 1;
  } while (bVar5 < 4);
  return;
}



/* ---- FUN_1fff5ecc @ 1fff5ecc ---- */

void FUN_1fff5ecc(void)

{
  FUN_1fff4944(*(int *)PTR_DAT_1fff6068 + 0x48);
  return;
}



/* ---- FUN_1fff5edc @ 1fff5edc ---- */

void FUN_1fff5edc(int param_1)

{
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = bVar1 & 0xfd;
    }
    else {
      bVar1 = bVar1 | 2;
    }
    *(byte *)(param_1 + 4) = bVar1;
  }
  return;
}



/* ---- FUN_1fff5ef4 @ 1fff5ef4 ---- */

undefined4 FUN_1fff5ef4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((-1 < (int)((uint)*(byte *)(param_1 + 4) << 0x1c)) &&
      ((int)((uint)*(byte *)(param_1 + 4) << 0x1d) < 0)) && (param_2 != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_1fff5f0a @ 1fff5f0a ---- */

int FUN_1fff5f0a(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int local_18;
  
  local_18 = 0;
  pcVar6 = *(code **)(*(int *)(param_1 + 0x10) + 8);
  if (*param_1 < 4) {
    uVar5 = *(undefined4 *)(DAT_1fff6070 + (uint)*param_1 * 0xc);
  }
  else {
    uVar5 = 0;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  param_1[0x14] = param_1[0x14] | 1;
  iVar3 = (*pcVar6)(uVar7,uVar5,&local_18,0);
  bVar1 = param_1[0x14];
  bVar2 = (byte)(bVar1 & 0xfffffffe);
  param_1[0x14] = bVar2;
  if ((int)((bVar1 & 0xfffffffe) << 0x1e) < 0) {
    param_1[0x14] = bVar2 & 0xfd;
    iVar3 = DAT_1fff6074;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - local_18;
    }
    if ((((iVar3 < 0) || (local_18 == 0)) && (*(int *)(param_1 + 8) != 0)) ||
       (iVar4 = FUN_1fff5c3c(param_1,uVar7,local_18), iVar4 < 0)) {
      FUN_1fff5b6a(param_1,0);
    }
    else if (*(int *)(param_1 + 8) == 0) {
      param_1[0xe] = 0xc1;
    }
  }
  return iVar3;
}



/* ---- FUN_1fff5f8e @ 1fff5f8e ---- */

int FUN_1fff5f8e(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(param_1 + 0x18);
  *puVar2 = 0xa6fe;
  *(undefined4 *)(puVar2 + 1) = param_2;
  iVar1 = FUN_1fff5c3c(param_1,puVar2,6);
  if (iVar1 < 0) {
    FUN_1fff5b6a(param_1,0);
  }
  return iVar1;
}



/* ---- FUN_1fff6078 @ 1fff6078 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1fff6078(undefined2 param_1)

{
  _DAT_a0000000 = param_1;
  return;
}



/* ---- FUN_1fff6080 @ 1fff6080 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1fff6080(undefined2 param_1)

{
  FUN_1fff1f26(0x90,0);
  _DAT_a0000000 = param_1;
  FUN_1fff1f26(0x90,1);
  return;
}



/* ---- FUN_1fff609e @ 1fff609e ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_1fff609e(void)

{
  FUN_1fff6080();
  return _DAT_a0000000;
}



/* ---- FUN_1fff60ac @ 1fff60ac ---- */

void FUN_1fff60ac(void)

{
  int iVar1;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  
  iVar1 = FUN_1fff609e(0xc6);
  if (iVar1 << 0x18 < 0) {
    local_14 = &DAT_a0000000;
    local_18 = 3;
    local_10 = 0x80000;
    local_c = 0x1a;
    local_a = 0;
    FUN_1fff6190(&local_18);
    return;
  }
  FUN_1fff0b7c();
  return;
}



/* ---- FUN_1fff60d4 @ 1fff60d4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1fff60d4(void)

{
  ushort uVar1;
  
  FUN_1fff1c5e(0x4d);
  FUN_1fff1d82(0x4d,10,DAT_1fff618c,0);
  FUN_1fff6080(0xba);
  _DAT_a0000000 = 9;
  FUN_1fff6080(0xb9);
  _DAT_a0000000 = 1;
  FUN_1fff6080(0xbb);
  _DAT_a0000000 = 0x83;
  FUN_1fff6080(0xd6);
  _DAT_a0000000 = 0x104;
  FUN_1fff6080(0xb7);
  _DAT_a0000000 = 0x243;
  FUN_1fff6080(0xb8);
  _DAT_a0000000 = 0;
  uVar1 = FUN_1fff609e(0xc5);
  FUN_1fff6080(0xc5);
  _DAT_a0000000 = uVar1 | 0x80;
  FUN_1fff6080(0xbe);
  _DAT_a0000000 = 0x400;
  FUN_1fff6080(0xb6);
  _DAT_a0000000 = 4;
  return;
}



/* ---- FUN_1fff615e @ 1fff615e ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1fff615e(undefined4 param_1,undefined4 param_2)

{
  FUN_1fff6080(0xbc);
  _DAT_a0000000 = (undefined2)param_2;
  FUN_1fff6080(0xbd);
  _DAT_a0000000 = (undefined2)((uint)param_2 >> 0x10);
  FUN_1fff6080(param_1);
  return;
}



/* ---- FUN_1fff6190 @ 1fff6190 ---- */

int FUN_1fff6190(uint *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar11 = *param_1;
  uVar3 = FUN_1fff2ca0();
  iVar10 = DAT_1fff658c;
  uVar3 = DAT_1fff6584 / uVar3;
  if (param_1 == (uint *)0x0) {
    iVar4 = DAT_1fff6588 + -1;
  }
  else {
    iVar4 = DAT_1fff6588;
    if (uVar11 < 6) {
      *(uint *)(DAT_1fff658c + 0x40) = *(uint *)(DAT_1fff658c + 0x40) | 1;
      puVar2 = DAT_1fff6590;
      if (DAT_1fff6590[1] == 0) {
        *DAT_1fff6590 = 0x80000000;
        puVar2[1] = 1;
        puVar2[1] = 0;
      }
      uVar8 = param_1[1];
      if ((uVar8 & param_1[2] - 1) == 0) {
        iVar4 = 0;
        do {
          uVar9 = *(uint *)(DAT_1fff6594 + iVar4 * 8);
          if ((uVar9 <= uVar8) &&
             (uVar8 + param_1[2] <= uVar9 + *(int *)(DAT_1fff6594 + iVar4 * 8 + 4))) {
            *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) | 0x300;
            iVar10 = 0;
            iVar4 = DAT_1fff6594 + 0x20;
            do {
              cVar1 = *(char *)(iVar4 + iVar10 * 2);
              if (cVar1 != -1) {
                FUN_1fff1d26(cVar1,*(undefined1 *)(iVar4 + iVar10 * 2 + 1));
                FUN_1fff1d82(*(undefined1 *)(iVar4 + iVar10 * 2),0x10,0);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < 0x20);
            iVar10 = 0;
            iVar4 = DAT_1fff6594 + 0x60;
            do {
              cVar1 = *(char *)(iVar4 + iVar10 * 2);
              if (cVar1 != -1) {
                FUN_1fff1d26(cVar1,*(undefined1 *)(iVar4 + iVar10 * 2 + 1));
                FUN_1fff1d82(*(undefined1 *)(iVar4 + iVar10 * 2),0x10,0);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < 0x20);
            uVar8 = param_1[3];
            uVar9 = puVar2[0x18];
            if (uVar11 == 0) {
              FUN_1fff1d82(0x61,0x10,0);
LAB_1fff62a6:
              if (((int)((uint)(ushort)param_1[3] << 0x1a) < 0) ||
                 ((int)((uint)(ushort)param_1[3] << 0x19) < 0)) goto LAB_1fff62b0;
            }
            else {
              if (uVar11 != 1) goto LAB_1fff62a6;
LAB_1fff62b0:
              FUN_1fff1d82(0x60,0x10,0);
              uVar9 = uVar9 & 0xfffffff;
              if (*param_1 == 1) {
                uVar9 = uVar9 | 0x10000000;
              }
              if ((int)((uint)(byte)param_1[3] << 0x19) < 0) {
                uVar9 = uVar9 | 0x20000000;
              }
            }
            if ((uVar11 == 2) || ((int)((uint)(ushort)param_1[3] << 0x15) < 0)) {
              FUN_1fff1d82(0xff,0x10,0);
              uVar9 = uVar9 & 0xfff0ffff;
              if (uVar11 == 2) {
                uVar9 = uVar9 | 0x10000;
              }
              if ((int)((uint)(ushort)param_1[3] << 0x15) < 0) {
                uVar9 = uVar9 | 0x20000;
              }
            }
            if ((uVar11 == 3) || ((int)(uVar11 << 0x14) < 0)) {
              FUN_1fff1d82(0x53,0x10,0);
              uVar9 = uVar9 & 0xffff0fff;
              if (uVar11 == 3) {
                uVar9 = uVar9 | 0x1000;
              }
              if ((int)((uint)(ushort)param_1[3] << 0x14) < 0) {
                uVar9 = uVar9 | 0x2000;
              }
            }
            if (((uVar11 == 4) || ((int)((uint)(ushort)param_1[3] << 0x18) < 0)) ||
               ((int)((uint)(ushort)param_1[3] << 0x17) < 0)) {
              FUN_1fff1d82(0x51,0x10,0);
              uVar9 = uVar9 & 0xf0ffffff;
              if ((int)((uint)(ushort)param_1[3] << 0x18) < 0) {
                uVar9 = uVar9 | 0x1000000;
              }
              if ((int)((uint)(ushort)param_1[3] << 0x17) < 0) {
                uVar9 = uVar9 | 0x2000000;
              }
            }
            if (((uVar11 == 5) || ((int)((uint)(ushort)param_1[3] << 0x18) < 0)) ||
               ((int)((uint)(ushort)param_1[3] << 0x16) < 0)) {
              FUN_1fff1d82(0x50,0x10,0);
              uVar9 = uVar9 & 0xff0fffff;
              if ((int)((uint)(ushort)param_1[3] << 0x18) < 0) {
                uVar9 = uVar9 | 0x100000;
              }
              if ((int)((uint)(ushort)param_1[3] << 0x16) < 0) {
                uVar9 = uVar9 | 0x200000;
              }
            }
            if ((int)((uint)(byte)param_1[3] << 0x1d) < 0) {
              FUN_1fff1d26(0xff,5);
            }
            if ((int)((uint)(byte)param_1[3] << 0x1c) < 0) {
              FUN_1fff1d26(0x33,5);
              FUN_1fff1d82(0x33,0x10,0);
            }
            if ((int)((uint)(byte)param_1[3] << 0x1b) < 0) {
              FUN_1fff1d26(0x4b,5);
              FUN_1fff1d82(0x4b,0x10,0);
            }
            uVar5 = (*(ushort *)((int)param_1 + 0xe) + 0xf) / uVar3 + 1;
            if (0x3f < uVar5) {
              return DAT_1fff6588 + 4;
            }
            uVar6 = (ushort)param_1[4] / uVar3;
            if (3 < uVar6) {
              return DAT_1fff6588 + 5;
            }
            uVar3 = *(ushort *)((int)param_1 + 0x12) / uVar3;
            if (3 < uVar3) {
              return DAT_1fff6588 + 6;
            }
            puVar7 = puVar2 + uVar11 * 3;
            puVar7[1] = 0;
            puVar2[0x18] = uVar9;
            *puVar7 = param_1[1];
            puVar7[2] = (uVar3 & 3) << 0x10 |
                        (uVar6 & 3) << 0x14 | uVar5 * 0x400 & 0xffff | ((byte)uVar8 & 3) << 6 | 800;
            puVar7[1] = param_1[2] - 1 & 0xffff0000 | 1;
            if (uVar11 == 0) {
              FUN_1fff1d26(0x61,5);
LAB_1fff645a:
              if ((-1 < (int)((uint)(ushort)param_1[3] << 0x1a)) &&
                 (-1 < (int)((uint)(ushort)param_1[3] << 0x19))) goto LAB_1fff646c;
            }
            else if (uVar11 != 1) goto LAB_1fff645a;
            FUN_1fff1d26(0x60,5);
LAB_1fff646c:
            if ((uVar11 == 2) || ((int)((uint)(ushort)param_1[3] << 0x15) < 0)) {
              FUN_1fff1d26(0xff,5);
            }
            if ((uVar11 == 3) || ((int)(uVar11 << 0x14) < 0)) {
              FUN_1fff1d26(0x53,5);
            }
            if (((uVar11 == 4) || ((int)((uint)(ushort)param_1[3] << 0x18) < 0)) ||
               ((int)((uint)(ushort)param_1[3] << 0x17) < 0)) {
              FUN_1fff1d26(0x51,5);
            }
            if (((uVar11 == 5) || ((int)((uint)(ushort)param_1[3] << 0x18) < 0)) ||
               ((int)((uint)(ushort)param_1[3] << 0x16) < 0)) {
              FUN_1fff1d26(0x50,5);
            }
            return 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        iVar4 = DAT_1fff6588 + 2;
      }
      else {
        iVar4 = DAT_1fff6588 + 1;
      }
    }
  }
  return iVar4;
}



/* ---- FUN_1fff64ca @ 1fff64ca ---- */

void FUN_1fff64ca(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1 * 0xc + DAT_1fff6590;
  uVar3 = *(uint *)(iVar2 + 8);
  uVar1 = FUN_1fff2ca0();
  uVar1 = (int)((ulonglong)(param_2 + 0xf) / ((ulonglong)DAT_1fff6584 / (ulonglong)uVar1)) + 1;
  if (uVar1 < 0x40) {
    *(uint *)(iVar2 + 8) = uVar1 * 0x400 & 0xffff | uVar3 & 0xffff03ff;
  }
  return;
}



/* ---- FUN_1fff651e @ 1fff651e ---- */

void FUN_1fff651e(void)

{
  int iVar1;
  
  FUN_1fff1d82(0x4b,0x180,0);
  FUN_1fff1cba(0x4b,1);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 < 100);
  return;
}



/* ---- FUN_1fff654a @ 1fff654a ---- */

void FUN_1fff654a(uint param_1)

{
  int iVar1;
  
  if (param_1 < 6) {
    iVar1 = DAT_1fff6594 + 0xa0;
    FUN_1fff1d82(*(undefined1 *)(iVar1 + param_1 * 2),0x180,0);
    FUN_1fff1d26(*(undefined1 *)(iVar1 + param_1 * 2),0);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < 100);
  }
  return;
}



/* ---- FUN_1fff6598 @ 1fff6598 ---- */

undefined8 FUN_1fff6598(byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *(uint *)(*(int *)(DAT_1fff6864 + (uint)*param_1 * 4) + 4) & 3;
  uVar1 = (uint)((ulonglong)param_3 * (ulonglong)DAT_1fff6868);
  uVar3 = param_4 * DAT_1fff6868 + (int)((ulonglong)param_3 * (ulonglong)DAT_1fff6868 >> 0x20);
  uVar2 = DAT_1fff6870;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      uVar2 = 1000;
    }
    else {
      if (uVar4 == 2) {
        return CONCAT44(uVar3 >> 0xf,uVar1 >> 0xf | uVar3 * 0x20000);
      }
      uVar2 = DAT_1fff686c;
      if (uVar4 != 3) {
        return 0;
      }
    }
  }
  uVar5 = FUN_1fff779c(uVar1,uVar3,uVar2,0);
  return uVar5;
}



/* ---- FUN_1fff65f2 @ 1fff65f2 ---- */

void FUN_1fff65f2(byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint local_10;
  int iStack_c;
  
  puVar1 = *(uint **)(DAT_1fff6864 + (uint)*param_1 * 4);
  *puVar1 = *puVar1 | 0x80;
  local_10 = param_3;
  iStack_c = param_4;
  FUN_1fff0684(0x2f,&local_10);
  iVar2 = -(uint)(local_10 > (uint)-(int)&stack0xe000dff0) - iStack_c;
  if ((uint)-iStack_c < (uint)(local_10 <= (uint)-(int)&stack0xe000dff0)) {
    local_10 = -(int)&stack0xe000dff0;
    iStack_c = 0;
  }
  FUN_1fff0688(0x2f,iVar2);
  if ((param_1 != (byte *)0x0) && (*(code **)(param_1 + 4) != (code *)0x0)) {
    (**(code **)(param_1 + 4))(param_1);
  }
  return;
}



/* ---- FUN_1fff664a @ 1fff664a ---- */

void FUN_1fff664a(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  *(uint *)(DAT_1fff6874 + 0x38) = *(uint *)(DAT_1fff6874 + 0x38) | 1;
  *DAT_1fff6878 = *DAT_1fff6878 | 0x80000;
  iVar6 = DAT_1fff6864;
  **(undefined4 **)(DAT_1fff6864 + (uint)*param_1 * 4) = 0x80;
  uVar1 = (uint)param_1[1];
  if (uVar1 == 3) {
    iVar2 = 0x13;
    iVar5 = *(int *)(iVar6 + (uint)*param_1 * 4);
  }
  else {
    if (uVar1 == 0) {
      *DAT_1fff687c = *DAT_1fff687c | 2;
      uVar1 = (uint)param_1[1];
    }
    iVar2 = (uVar1 & 3) + 4;
    iVar5 = *(int *)(iVar6 + (uint)*param_1 * 4);
  }
  *(int *)(iVar5 + 4) = iVar2;
  *(undefined4 *)(*(int *)(iVar6 + (uint)*param_1 * 4) + 8) = 0xffff;
  if (*param_1 == 0) {
    FUN_1fff67f8(0x3a);
    FUN_1fff30e6(0x3a,1,DAT_1fff6880,param_1);
  }
  puVar3 = *(uint **)(iVar6 + (uint)*param_1 * 4);
  uVar1 = *puVar3 | 0x40;
  *puVar3 = uVar1;
  iVar6 = DAT_1fff6864 + -4;
  *(byte **)(iVar6 + (uint)*param_1 * 4) = param_1;
  uVar7 = FUN_1fff6598(param_1,uVar1,0xffff,0);
  *(undefined8 *)(*(int *)(iVar6 + (uint)*param_1 * 4) + 8) = uVar7;
  uVar4 = FUN_1fff6598(param_1,(int)((ulonglong)uVar7 >> 0x20),1,0);
  *(undefined4 *)(*(int *)(iVar6 + (uint)*param_1 * 4) + 0x10) = uVar4;
  return;
}



/* ---- FUN_1fff66fe @ 1fff66fe ---- */

void FUN_1fff66fe(byte *param_1)

{
  uint *puVar1;
  
  FUN_1fff3144(0);
  puVar1 = *(uint **)(DAT_1fff6864 + (uint)*param_1 * 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  FUN_1fff3144();
  return;
}



/* ---- FUN_1fff6732 @ 1fff6732 ---- */

void FUN_1fff6732(byte *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1fff680e();
  uVar1 = (uint)lVar2;
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  *(uint *)(*(int *)(DAT_1fff6864 + (uint)*param_1 * 4) + 8) = uVar1 & 0xffff;
  return;
}



/* ---- FUN_1fff674e @ 1fff674e ---- */

void FUN_1fff674e(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_1fff3144(0);
  iVar1 = DAT_1fff6864;
  **(undefined4 **)(DAT_1fff6864 + (uint)*param_1 * 4) = 0;
  uVar3 = (uint)param_1[1];
  iVar6 = *(int *)(iVar1 + (uint)*param_1 * 4);
  if (uVar3 == (*(uint *)(iVar6 + 4) & 3)) goto LAB_1fff67d0;
  if (uVar3 == 3) {
    iVar4 = 0x13;
LAB_1fff67b2:
    *(int *)(iVar6 + 4) = iVar4;
  }
  else {
    if (uVar3 == 0) {
      *DAT_1fff687c = *DAT_1fff687c | 2;
      iVar4 = (param_1[1] & 3) + 4;
      iVar6 = *(int *)(iVar1 + (uint)*param_1 * 4);
      goto LAB_1fff67b2;
    }
    if (uVar3 == 1) {
      iVar4 = 5;
      goto LAB_1fff67b2;
    }
    if (uVar3 == 2) {
      iVar4 = 6;
      goto LAB_1fff67b2;
    }
  }
  uVar7 = FUN_1fff6598(param_1,iVar6,0xffff,0);
  *(undefined8 *)(param_1 + 8) = uVar7;
  uVar7 = FUN_1fff6598(param_1,(int)((ulonglong)uVar7 >> 0x20),1,0);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  *(int *)(param_1 + 0x10) = (int)uVar7;
LAB_1fff67d0:
  FUN_1fff6732(param_1,iVar6,param_3,param_4);
  FUN_1fff67f8(0x3a);
  puVar5 = *(uint **)(iVar1 + (uint)*param_1 * 4);
  *puVar5 = *puVar5 | 0xc1;
  FUN_1fff3144(uVar2);
  return;
}



/* ---- FUN_1fff67f8 @ 1fff67f8 ---- */

void FUN_1fff67f8(uint param_1)

{
  *(int *)((param_1 >> 5) * 4 + -0x1fff1d80) = 1 << (param_1 & 0x1f);
  return;
}



/* ---- FUN_1fff680e @ 1fff680e ---- */

void FUN_1fff680e(byte *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(int *)(DAT_1fff6864 + (uint)*param_1 * 4) + 4) & 3;
  uVar2 = DAT_1fff6870;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      uVar2 = 1000;
    }
    else {
      if (uVar3 == 2) {
        uVar2 = param_4 << 0xf | param_3 >> 0x11;
        iVar1 = param_3 << 0xf;
        goto LAB_1fff6848;
      }
      uVar2 = DAT_1fff686c;
      if (uVar3 != 3) {
        return;
      }
    }
  }
  iVar1 = (int)((ulonglong)param_3 * (ulonglong)uVar2);
  uVar2 = param_4 * uVar2 + (int)((ulonglong)param_3 * (ulonglong)uVar2 >> 0x20);
LAB_1fff6848:
  FUN_1fff779c(iVar1,uVar2,DAT_1fff6868,0);
  return;
}



/* ---- FUN_1fff6c04 @ 1fff6c04 ---- */

undefined1 FUN_1fff6c04(void)

{
  return PTR_DAT_1fff6c7c[1];
}



/* ---- FUN_1fff6c0a @ 1fff6c0a ---- */

void FUN_1fff6c0a(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_1fff6c7c;
  PTR_DAT_1fff6c7c[1] = (char)param_1;
  uVar5 = DAT_1fff6c8c;
  puVar3 = DAT_1fff6c88;
  iVar2 = DAT_1fff6c84;
  if ((byte)*puVar1 <= param_1) {
    param_1 = (uint)(byte)*puVar1;
  }
  switch(param_1) {
  case 0:
    *(undefined4 *)(puVar1 + 0xc) = 0;
    return;
  case 1:
    *(undefined1 *)(DAT_1fff6c84 + 1) = 0;
    *puVar3 = *puVar3 & 0xfffffffb;
    uVar5 = DAT_1fff6c90;
    break;
  case 2:
    *(byte *)(DAT_1fff6c84 + 2) = *(byte *)(DAT_1fff6c84 + 2) & 0x3f;
    bVar4 = *(byte *)(iVar2 + 2) | 0x80;
    goto LAB_1fff6c5c;
  case 3:
    bVar4 = *(byte *)(DAT_1fff6c84 + 2) & 0x3f;
LAB_1fff6c5c:
    *(byte *)(iVar2 + 2) = bVar4;
    *(undefined1 *)(iVar2 + 1) = 0;
    *puVar3 = *puVar3 | 4;
    *(undefined4 *)(puVar1 + 0xc) = uVar5;
    return;
  case 4:
    *(undefined1 *)(DAT_1fff6c84 + 1) = 2;
    *puVar3 = *puVar3 | 4;
    uVar5 = DAT_1fff6cd0;
    break;
  case 5:
    *(byte *)(DAT_1fff6c84 + 2) = *(byte *)(DAT_1fff6c84 + 2) & 0xf8;
    *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 3;
    *(undefined1 *)(iVar2 + 1) = 3;
    *puVar3 = *puVar3 | 4;
    uVar5 = DAT_1fff6cd4;
    break;
  default:
    return;
  }
  *(undefined4 *)(puVar1 + 0xc) = uVar5;
  return;
}



/* ---- FUN_1fff6cd8 @ 1fff6cd8 ---- */

undefined4 FUN_1fff6cd8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_1fff30ca(0);
  piVar1 = (int *)*DAT_1fff6e00;
  if (piVar1 != DAT_1fff6e00) {
    for (; piVar1 != DAT_1fff6e00; piVar1 = (int *)*piVar1) {
      if (piVar1 == (int *)(param_1 + 0x10)) {
        uVar2 = 1;
        break;
      }
    }
  }
  FUN_1fff30ca();
  return uVar2;
}



/* ---- FUN_1fff6d06 @ 1fff6d06 ---- */

void FUN_1fff6d06(void)

{
  return;
}



/* ---- FUN_1fff6d62 @ 1fff6d62 ---- */

void FUN_1fff6d62(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  piVar1 = DAT_1fff6e00;
  if (DAT_1fff6e00[-3] == 0) {
    DAT_1fff6e00[1] = (int)DAT_1fff6e00;
    *piVar1 = (int)piVar1;
    piVar1[-3] = 1;
  }
  iVar2 = FUN_1fff6cd8(param_1);
  if (iVar2 != 0) {
    return;
  }
  uVar3 = FUN_1fff30ca();
  piVar4 = DAT_1fff6e00;
  piVar6 = (int *)(param_1 + 0x10);
  puVar7 = (undefined4 *)DAT_1fff6e00[1];
  *piVar6 = (int)DAT_1fff6e00;
  *(undefined4 **)(param_1 + 0x14) = puVar7;
  *puVar7 = piVar6;
  piVar4[1] = (int)piVar6;
  piVar1[-2] = piVar1[-2] + 1;
  FUN_1fff30ca(uVar3);
  FUN_1fff4c2c(param_1 + 8);
  pbVar9 = (byte *)(DAT_1fff6e00 + 2);
  pbVar8 = (byte *)(DAT_1fff6e00 + -4);
  *pbVar8 = *pbVar9;
  uVar3 = FUN_1fff30ca(0);
  piVar1 = DAT_1fff6e00;
  piVar4 = (int *)*DAT_1fff6e00;
  if (piVar4 != DAT_1fff6e00) {
    for (; piVar4 != piVar1; piVar4 = (int *)*piVar4) {
      *pbVar8 = pbVar9[piVar4[-4]] & *pbVar8;
    }
  }
  uVar5 = 5;
  do {
    if ((1 << (uVar5 & 0xff) & (uint)*pbVar8) != 0) {
      FUN_1fff6c0a(uVar5 & 0xff);
      break;
    }
    uVar5 = uVar5 - 1;
  } while (-1 < (int)uVar5);
  FUN_1fff30ca(uVar3);
  return;
}



/* ---- FUN_1fff6db4 @ 1fff6db4 ---- */

void FUN_1fff6db4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  piVar1 = DAT_1fff6e00;
  if ((DAT_1fff6e00[-3] == 0) || (iVar2 = FUN_1fff6cd8(param_1), iVar2 == 0)) {
    return;
  }
  uVar3 = FUN_1fff30ca(0);
  iVar2 = *(int *)(param_1 + 0x10);
  piVar5 = *(int **)(param_1 + 0x14);
  *piVar5 = iVar2;
  *(int **)(iVar2 + 4) = piVar5;
  piVar1[-2] = piVar1[-2] + -1;
  FUN_1fff30ca(uVar3);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pbVar7 = (byte *)(DAT_1fff6e00 + 2);
  pbVar6 = (byte *)(DAT_1fff6e00 + -4);
  *pbVar6 = *pbVar7;
  uVar3 = FUN_1fff30ca(0);
  piVar1 = DAT_1fff6e00;
  piVar5 = (int *)*DAT_1fff6e00;
  if (piVar5 != DAT_1fff6e00) {
    for (; piVar5 != piVar1; piVar5 = (int *)*piVar5) {
      *pbVar6 = pbVar7[piVar5[-4]] & *pbVar6;
    }
  }
  uVar4 = 5;
  do {
    if ((1 << (uVar4 & 0xff) & (uint)*pbVar6) != 0) {
      FUN_1fff6c0a(uVar4 & 0xff);
      break;
    }
    uVar4 = uVar4 - 1;
  } while (-1 < (int)uVar4);
  FUN_1fff30ca(uVar3);
  return;
}



/* ---- FUN_1fff6f68 @ 1fff6f68 ---- */

void FUN_1fff6f68(void)

{
  FUN_1fff05b6();
  FUN_1fff2868();
  FUN_1fff3144(0);
  FUN_1fff10a0();
  DataSynchronizationBarrier(0xf);
  *DAT_1fff6fd0 = *DAT_1fff6fd0 & 0x700 | DAT_1fff6fd4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ---- FUN_1fff6fdc @ 1fff6fdc ---- */

int FUN_1fff6fdc(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return DAT_1fff71b4 + -1;
  }
  if ((uint)(DAT_1fff71b0 + param_1) < 0x2001) {
    return DAT_1fff71b4;
  }
  if (0x14 < param_2) {
    return DAT_1fff71b4 + 3;
  }
  *(uint *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return 0;
}



/* ---- FUN_1fff700c @ 1fff700c ---- */

int FUN_1fff700c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = DAT_1fff71b4 + -1;
  }
  else {
    if ((uint)(DAT_1fff71b0 + param_1) < 0x2001) {
      return DAT_1fff71b4;
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      return DAT_1fff71b4 + 2;
    }
  }
  return iVar1;
}



/* ---- FUN_1fff7034 @ 1fff7034 ---- */

int FUN_1fff7034(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_1fff700c(param_1,0);
  if (-1 < iVar1) {
    uVar2 = FUN_1fff30ca(0);
    *(undefined4 *)(param_1 + *(int *)(param_1 + 0x54) * 4) = param_2;
    iVar3 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 == *(int *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
    FUN_1fff30ca(uVar2);
  }
  return iVar1;
}



/* ---- FUN_1fff7070 @ 1fff7070 ---- */

undefined4 FUN_1fff7070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_r3;
  
  FUN_1fff700c(param_1,1,param_3,param_1);
  if (*(int *)(extraout_r3 + 0x58) != 0) {
    return *(undefined4 *)(extraout_r3 + 0x50);
  }
  return *(undefined4 *)(extraout_r3 + 0x54);
}



/* ---- FUN_1fff724e @ 1fff724e ---- */

undefined4 FUN_1fff724e(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + 0x1b + *(int *)(param_1 + 0xf) * 10;
  uVar2 = *(int *)(iVar1 + -4) + *(int *)(iVar1 + -8);
  *param_2 = uVar2;
  if ((uVar2 < *(uint *)(param_1 + 0x13)) && (*(short *)(param_1 + uVar2) == -0x3ffd)) {
    return 1;
  }
  return 0;
}



/* ---- FUN_1fff72ce @ 1fff72ce ---- */

undefined1 * FUN_1fff72ce(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  iVar3 = *(int *)(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x17) = 0;
  local_10 = param_4;
  iVar1 = FUN_1fff724e(param_1,&local_10);
  uVar2 = local_10;
  if ((iVar1 == 0) && ((local_10 == 0 || (*(uint *)(param_1 + 0x13) <= local_10)))) {
    uVar2 = *(uint *)(param_1 + 0x13);
  }
  iVar1 = FUN_1fff76a4(0,param_1,uVar2);
  *(int *)(param_1 + 0x17) = iVar3;
  if (iVar1 == iVar3) {
    return (undefined1 *)0x0;
  }
  return &DAT_a0000000;
}



/* ---- FUN_1fff7320 @ 1fff7320 ---- */

byte FUN_1fff7320(int param_1)

{
  return *(byte *)(param_1 + 6) & 1;
}



/* ---- FUN_1fff7328 @ 1fff7328 ---- */

short FUN_1fff7328(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  short sVar2;
  
  puVar1 = (undefined4 *)(param_1 + param_2);
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    sVar2 = (short)param_2 + 8;
  }
  else {
    *(short *)puVar1 = (short)*param_3;
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_3 + 6);
    sVar2 = (short)param_2 + 4;
  }
  return sVar2;
}



/* ---- FUN_1fff7350 @ 1fff7350 ---- */

uint FUN_1fff7350(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uStack_18;
  uint local_14;
  
  uStack_18 = param_3;
  local_14 = param_4;
  FUN_1fff76c4(param_1,&uStack_18);
  while( true ) {
    iVar1 = FUN_1fff76d2(&uStack_18);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_1fff772a(&uStack_18);
    if (iVar1 == param_2) break;
    FUN_1fff76fa(&uStack_18);
  }
  return local_14 & 0xffff;
}



/* ---- FUN_1fff7382 @ 1fff7382 ---- */

undefined4 FUN_1fff7382(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    sVar3 = 8;
  }
  else {
    sVar3 = 4;
  }
  uVar1 = sVar3 + *(short *)(param_2 + 6);
  uVar2 = DAT_1fff769c;
  if ((int)(uint)uVar1 <= (int)((uint)*(ushort *)(param_1 + 0xe) - (uint)*(ushort *)(param_1 + 0xc))
     ) {
    *param_3 = *(ushort *)(param_1 + 0xc);
    *(ushort *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + uVar1;
    uVar1 = FUN_1fff7328(param_1,*param_3,param_2);
    *param_3 = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- FUN_1fff73e6 @ 1fff73e6 ---- */

int FUN_1fff73e6(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint local_18;
  
  iVar5 = 0;
  local_18 = param_4;
  iVar2 = FUN_1fff7350(param_1,*param_2);
  if (iVar2 == 0) {
    iVar5 = FUN_1fff7382(param_1,param_2,&local_18);
    if (iVar5 < 0) {
      return iVar5;
    }
    uVar1 = *(undefined2 *)((int)param_2 + 6);
    uVar3 = local_18 & 0xffff;
  }
  else {
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      uVar4 = *(ushort *)(param_1 + iVar2 + 6);
    }
    else {
      uVar4 = (ushort)*(byte *)(param_1 + iVar2 + 3);
    }
    if (uVar4 != *(ushort *)((int)param_2 + 6)) {
      return DAT_1fff76a0;
    }
    uVar3 = FUN_1fff7328(param_1,iVar2,param_2);
    uVar1 = *(undefined2 *)((int)param_2 + 6);
  }
  FUN_1fff7ba4(uVar3 + param_1,param_2 + 2,uVar1);
  return iVar5;
}



/* ---- FUN_1fff7446 @ 1fff7446 ---- */

int FUN_1fff7446(int param_1,uint *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  
  iVar1 = FUN_1fff7350(param_1,*param_2);
  if (iVar1 == 0) {
    return DAT_1fff76a0 + -1;
  }
  puVar2 = (ushort *)(param_1 + iVar1);
  uVar4 = (uint)*(ushort *)((int)param_2 + 6);
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    if (uVar4 != puVar2[3]) {
      return DAT_1fff76a0;
    }
    uVar4 = uVar4 + 8;
  }
  else {
    if (uVar4 != *(byte *)((int)puVar2 + 3)) {
      return DAT_1fff76a0;
    }
    puVar3 = puVar2 + 1;
    *param_2 = (uint)*puVar2;
    puVar2 = puVar2 + 2;
    *(ushort *)(param_2 + 1) = (ushort)(byte)*puVar3;
    uVar4 = (uint)*(ushort *)((int)param_2 + 6);
    param_2 = param_2 + 2;
  }
  FUN_1fff7ba4(param_2,puVar2,uVar4);
  return 0;
}



/* ---- FUN_1fff749c @ 1fff749c ---- */

int FUN_1fff749c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_1fff76a0 + -1;
  iVar1 = FUN_1fff7350();
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      uVar3 = (uint)(ushort)(*(short *)(param_1 + iVar1 + 6) + 8);
    }
    else {
      uVar3 = *(byte *)(param_1 + iVar1 + 3) + 4;
    }
    FUN_1fff7c2e(iVar1 + param_1,iVar1 + uVar3 + param_1,
                 ((uint)*(ushort *)(param_1 + 0xc) - iVar1) - uVar3 & 0xffff);
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) - (short)uVar3;
    iVar2 = 0;
  }
  return iVar2;
}



/* ---- FUN_1fff7528 @ 1fff7528 ---- */

void FUN_1fff7528(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined1 local_10;
  undefined3 uStack_f;
  
  _uStack_14 = CONCAT22(1,(short)param_3);
  _local_10 = CONCAT31((int3)((uint)param_4 >> 8),*param_3);
  local_18 = param_2;
  FUN_1fff7446(param_1,&local_18);
  *param_3 = local_10;
  return;
}



/* ---- FUN_1fff7548 @ 1fff7548 ---- */

void FUN_1fff7548(undefined4 param_1,undefined4 param_2,undefined2 *param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 uStack_e;
  
  _uStack_14 = CONCAT22(2,(short)param_3);
  _local_10 = CONCAT22((short)((uint)param_4 >> 0x10),*param_3);
  local_18 = param_2;
  FUN_1fff7446(param_1,&local_18);
  *param_3 = local_10;
  return;
}



/* ---- FUN_1fff76a4 @ 1fff76a4 ---- */

void FUN_1fff76a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  
  do {
    bVar1 = param_3 != 0;
    param_3 = param_3 + -1;
  } while (bVar1);
  return;
}



/* ---- FUN_1fff76c4 @ 1fff76c4 ---- */

void FUN_1fff76c4(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 0x10;
  return;
}



/* ---- FUN_1fff76d2 @ 1fff76d2 ---- */

undefined4 FUN_1fff76d2(int *param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 1) < *(ushort *)(*param_1 + 0xc)) &&
     (iVar1 = FUN_1fff7780(param_1),
     iVar1 + (uint)*(ushort *)(param_1 + 1) <= (uint)*(ushort *)(*param_1 + 0xc))) {
    return 1;
  }
  return 0;
}



/* ---- FUN_1fff76fa @ 1fff76fa ---- */

undefined4 FUN_1fff76fa(int *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_1fff76d2();
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar1 = *(ushort *)(param_1 + 1);
    iVar3 = *param_1;
    iVar4 = FUN_1fff7320();
    if (iVar4 == 0) {
      sVar2 = (short)param_1[1] + *(short *)(iVar3 + (uint)uVar1 + 6) + 8;
    }
    else {
      sVar2 = (short)param_1[1] + (ushort)*(byte *)(iVar3 + (uint)uVar1 + 3) + 4;
    }
    *(short *)(param_1 + 1) = sVar2;
    uVar5 = 1;
  }
  return uVar5;
}



/* ---- FUN_1fff772a @ 1fff772a ---- */

uint FUN_1fff772a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1fff7320(*param_1);
  if (iVar1 != 0) {
    return (uint)(ushort)*(uint *)(*param_1 + (uint)*(ushort *)(param_1 + 1));
  }
  return *(uint *)(*param_1 + (uint)*(ushort *)(param_1 + 1));
}



/* ---- FUN_1fff7746 @ 1fff7746 ---- */

ushort FUN_1fff7746(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1fff7320(*param_1);
  if (iVar1 != 0) {
    return (ushort)*(byte *)(*param_1 + (uint)*(ushort *)(param_1 + 1) + 2);
  }
  return *(ushort *)(*param_1 + (uint)*(ushort *)(param_1 + 1) + 4);
}



/* ---- FUN_1fff7780 @ 1fff7780 ---- */

ushort FUN_1fff7780(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1fff7320(*param_1);
  if (iVar1 != 0) {
    return (ushort)*(byte *)(*param_1 + (uint)*(ushort *)(param_1 + 1) + 3);
  }
  return *(ushort *)(*param_1 + (uint)*(ushort *)(param_1 + 1) + 6);
}



/* ---- FUN_1fff779c @ 1fff779c ---- */

undefined8 FUN_1fff779c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  if (param_4 == 0 && param_3 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (param_4 != 0) {
    iVar3 = LZCOUNT(param_4);
    uVar1 = param_4 << iVar3;
    uVar5 = uVar1 >> iVar3 ^ param_4 | param_3;
  }
  else {
    iVar3 = LZCOUNT(param_3);
    uVar1 = param_3 << iVar3;
  }
  uVar4 = -iVar3 + 0x20;
  if (param_4 != 0) {
    uVar1 = uVar1 | param_3 >> (uVar4 & 0xff);
    uVar4 = -iVar3 + 0x40;
  }
  uVar2 = uVar1 >> 0x10;
  if (uVar5 != 0 || (uVar1 & 0xffff) != 0) {
    uVar2 = uVar2 + 1;
  }
  iVar3 = 0;
  uVar5 = 0;
  for (; param_4 < param_2 || param_2 - param_4 < (uint)(param_3 <= param_1);
      param_2 = (param_2 -
                (uVar6 * param_4 +
                uVar8 * param_3 + (int)((ulonglong)uVar6 * (ulonglong)param_3 >> 0x20))) -
                (uint)bVar10) {
    if (param_2 != 0) {
      iVar7 = LZCOUNT(param_2);
      uVar1 = param_2 << iVar7;
    }
    else {
      iVar7 = LZCOUNT(param_1);
      uVar1 = param_1 << iVar7;
    }
    uVar8 = -iVar7 + 0x20;
    if (param_2 != 0) {
      uVar1 = uVar1 | param_1 >> (uVar8 & 0xff);
      uVar8 = -iVar7 + 0x40;
    }
    uVar9 = (uVar8 - uVar4) - 0x10;
    uVar6 = uVar1 / uVar2 >> (0x20 - (uVar9 & 0x1f) & 0xff);
    uVar8 = uVar6;
    uVar1 = uVar1 / uVar2 << (uVar9 & 0x1f);
    if ((int)uVar9 < 0) {
      uVar8 = 0;
      uVar1 = uVar6;
    }
    uVar6 = uVar1;
    if (0x1f < (int)uVar9) {
      uVar6 = 0;
      uVar8 = uVar1;
    }
    if (uVar6 == 0 && uVar8 == 0) {
      uVar6 = 1;
    }
    bVar10 = CARRY4(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar1 = (uint)((ulonglong)uVar6 * (ulonglong)param_3);
    iVar3 = iVar3 + uVar8 + bVar10;
    bVar10 = param_1 < uVar1;
    param_1 = param_1 - uVar1;
  }
  return CONCAT44(iVar3,uVar5);
}



/* ---- FUN_1fff788a @ 1fff788a ---- */

int FUN_1fff788a(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_2 >> 1;
  uVar1 = param_4 >> 1;
  if ((int)uVar3 < 0) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -param_2;
    if (bVar4) {
      param_2 = param_2 + -1;
    }
  }
  if ((int)param_4 < 0) {
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -param_4;
    if (bVar4) {
      param_4 = param_4 - 1;
    }
  }
  iVar2 = FUN_1fff779c(param_1,param_2,param_3,param_4);
  if (((uVar3 ^ uVar1) & 0x40000000) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* ---- FUN_1fff78fc @ 1fff78fc ---- */

void FUN_1fff78fc(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[6];
  if ((int)(*param_1 << 0x1b) < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(uVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}



/* ---- FUN_1fff7928 @ 1fff7928 ---- */

void FUN_1fff7928(byte *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(param_1 + 4))(0x20,*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}



/* ---- FUN_1fff794a @ 1fff794a ---- */

void FUN_1fff794a(byte *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    if ((int)((uint)*param_1 << 0x1a) < 0) {
      param_3 = *(uint *)(param_1 + 0x1c);
    }
    for (uVar1 = 0; (uVar1 < param_3 && (param_2[uVar1] != '\0')); uVar1 = uVar1 + 1) {
    }
  }
  puVar2 = param_2 + uVar1;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar1;
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
  FUN_1fff78fc(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_1fff7928(param_1);
  return;
}



/* ---- FUN_1fff7a6c @ 1fff7a6c ---- */

uint FUN_1fff7a6c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_1fff7ba0;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x1fff7a60), uVar3 != 0))) {
        uVar5 = uVar5 | uVar3;
      }
      if ((int)(uVar5 << 0x1e) < 0) {
        uVar5 = uVar5 & 0xfffffffb;
      }
      param_1[7] = 0;
      iVar6 = 0;
      param_1[6] = 0;
      puVar7 = param_2;
      do {
        if (uVar2 == 0x2a) {
          param_2 = puVar7 + 1;
          param_1[iVar6 + 6] = *puVar7;
          uVar2 = (*(code *)param_1[3])(param_1);
          if (iVar6 == 1) {
            if ((int)param_1[7] < 0) {
              uVar5 = uVar5 & 0xffffffdf;
            }
            break;
          }
        }
        else {
          iVar4 = FUN_1fff8044(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_1fff8044();
              if (iVar4 == 0) break;
              param_1[iVar6 + 6] = (uVar2 + param_1[iVar6 + 6] * 10) - 0x30;
            }
          }
          param_2 = puVar7;
          if (iVar6 == 1) break;
        }
        if (uVar2 != 0x2e) break;
        uVar2 = (*(code *)param_1[3])(param_1);
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 | 0x20;
        puVar7 = param_2;
      } while (iVar6 < 2);
      if ((int)param_1[6] < 0) {
        uVar5 = uVar5 | 1;
        param_1[6] = -param_1[6];
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 & 0xffffffef;
      }
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = FUN_1fff03b4(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_1fff7a90;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_1fff7a90:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* ---- FUN_1fff7ba4 @ 1fff7ba4 ---- */

undefined8 FUN_1fff7ba4(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined2 uVar7;
  byte in_r12;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  puVar4 = param_2;
  if (3 < param_3) {
    uVar8 = (uint)param_1 & 3;
    puVar2 = param_1;
    uVar9 = uVar8;
    if (uVar8 != 0) {
      bVar6 = (byte)*param_2;
      puVar4 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_2 + 2);
        uVar9 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar6;
      param_2 = puVar4;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar4 + 1);
        bVar6 = (byte)*puVar4;
      }
      param_3 = (param_3 + uVar8) - 4;
      puVar4 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar9;
      }
      puVar2 = puVar4;
      if (uVar8 < 2) {
        puVar2 = (uint *)((int)puVar4 + 1);
        *(byte *)puVar4 = bVar6;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      uVar9 = 0;
      while (uVar8 = param_3 - 0x20, 0x1f < param_3) {
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        *puVar2 = *param_2;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        uVar9 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        puVar2[4] = uVar9;
        puVar2[5] = uVar10;
        puVar2[6] = uVar11;
        puVar2[7] = uVar12;
        puVar2 = puVar2 + 8;
        param_3 = uVar8;
      }
      if ((uVar8 & 0x10) != 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        param_2 = param_2 + 4;
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        puVar2 = puVar2 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2 = puVar2 + 2;
      }
      puVar3 = puVar2;
      puVar4 = param_2;
      if ((uVar8 & 4) != 0) {
        puVar4 = param_2 + 1;
        uVar9 = *param_2;
        puVar3 = puVar2 + 1;
        *puVar2 = uVar9;
      }
      uVar7 = (undefined2)uVar9;
      if ((uVar8 & 3) != 0) {
        bVar1 = (uVar8 & 2) != 0;
        param_3 = param_3 << 0x1f;
        bVar13 = (int)param_3 < 0;
        puVar2 = puVar4;
        if (bVar1) {
          puVar2 = (uint *)((int)puVar4 + 2);
          uVar7 = (undefined2)*puVar4;
        }
        puVar4 = puVar2;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar2 + 1);
          param_3 = (uint)(byte)*puVar2;
        }
        puVar2 = puVar3;
        if (bVar1) {
          puVar2 = (uint *)((int)puVar3 + 2);
          *(undefined2 *)puVar3 = uVar7;
        }
        puVar3 = puVar2;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar2 + 1);
          *(byte *)puVar2 = (byte)param_3;
        }
        return CONCAT44(puVar4,puVar3);
      }
      return CONCAT44(puVar4,puVar3);
    }
    while( true ) {
      in_r12 = (byte)uVar9;
      if (param_3 < 8) break;
      puVar4 = param_2 + 1;
      param_4 = *param_2;
      param_2 = param_2 + 2;
      uVar9 = *puVar4;
      *puVar2 = param_4;
      puVar2[1] = uVar9;
      puVar2 = puVar2 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar2;
    puVar4 = param_2;
    if (-1 < (int)param_3) {
      puVar4 = param_2 + 1;
      param_4 = *param_2;
      param_1 = puVar2 + 1;
      *puVar2 = param_4;
    }
  }
  bVar6 = (byte)param_4;
  bVar1 = (param_3 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar1) {
    pbVar5 = (byte *)((int)puVar4 + 1);
    bVar6 = (byte)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 2);
    in_r12 = *pbVar5;
  }
  puVar2 = puVar4;
  if (bVar13) {
    puVar2 = (uint *)((int)puVar4 + 1);
    param_3 = (uint)(byte)*puVar4;
  }
  if (bVar1) {
    pbVar5 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar5 = in_r12;
  }
  puVar4 = param_1;
  if (bVar13) {
    puVar4 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar2,puVar4);
}



/* ---- FUN_1fff7c2e @ 1fff7c2e ---- */

undefined8 FUN_1fff7c2e(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_r12;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  bVar5 = (byte)in_r12;
  uVar8 = (int)param_1 - (int)param_2;
  bVar14 = uVar8 == 0;
  if (param_2 <= param_1) {
    bVar14 = param_3 == uVar8;
  }
  if ((param_2 <= param_1 && uVar8 <= param_3) && !bVar14) {
    param_1 = (uint *)((int)param_1 + param_3);
    param_2 = (uint *)((int)param_2 + param_3);
    if (3 < param_3) {
      bVar14 = ((uint)param_1 & 3) == 0;
      do {
        if (!bVar14) {
          param_2 = (uint *)((int)param_2 + -1);
          param_3 = param_3 - 1;
          param_1 = (uint *)((int)param_1 + -1);
          *(byte *)param_1 = *(byte *)param_2;
        }
        bVar14 = ((uint)param_1 & 3) == 0;
      } while (!bVar14);
      uVar8 = (uint)param_2 & 3;
      if (uVar8 == 0) {
        while (uVar8 = param_3 - 0x10, 0xf < param_3) {
          puVar3 = param_2 + -1;
          uVar11 = param_2[-2];
          uVar10 = param_2[-3];
          param_2 = param_2 + -4;
          uVar9 = *param_2;
          param_1[-1] = *puVar3;
          param_1[-2] = uVar11;
          param_1[-3] = uVar10;
          param_1 = param_1 + -4;
          *param_1 = uVar9;
          param_3 = uVar8;
        }
        uVar9 = param_3 << 0x1d;
        bVar14 = (int)uVar9 < 0;
        if ((uVar8 & 8) != 0) {
          puVar3 = param_2 + -1;
          param_2 = param_2 + -2;
          uVar9 = *param_2;
          param_1[-1] = *puVar3;
          param_1 = param_1 + -2;
          *param_1 = uVar9;
        }
        if (bVar14) {
          param_2 = param_2 + -1;
          uVar9 = *param_2;
          param_1 = param_1 + -1;
          *param_1 = uVar9;
        }
        uVar7 = (undefined2)uVar9;
        if ((uVar8 & 3) != 0) {
          bVar14 = (uVar8 & 2) != 0;
          param_3 = param_3 << 0x1f;
          bVar13 = (int)param_3 < 0;
          if (bVar14) {
            param_2 = (uint *)((int)param_2 + -2);
            uVar7 = *(undefined2 *)param_2;
          }
          if (bVar13) {
            param_3 = (uint)*(byte *)((int)param_2 + -1);
          }
          if (bVar14) {
            param_1 = (uint *)((int)param_1 + -2);
            *(undefined2 *)param_1 = uVar7;
          }
          if (bVar13) {
            *(byte *)((int)param_1 + -1) = (byte)param_3;
          }
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,param_1);
      }
      while( true ) {
        bVar5 = (byte)in_r12;
        if (param_3 < 8) break;
        uVar8 = param_2[-1];
        param_2 = param_2 + -2;
        in_r12 = *param_2;
        param_1[-1] = uVar8;
        param_1 = param_1 + -2;
        *param_1 = in_r12;
        param_3 = param_3 - 8;
      }
      param_3 = param_3 - 4;
      if (-1 < (int)param_3) {
        param_2 = param_2 + -1;
        uVar8 = *param_2;
        param_1 = param_1 + -1;
        *param_1 = uVar8;
      }
    }
    bVar6 = (byte)uVar8;
    bVar14 = (param_3 & 2) != 0;
    param_3 = param_3 << 0x1f;
    bVar13 = (int)param_3 < 0;
    if (bVar14) {
      bVar6 = *(byte *)((int)param_2 + -1);
      param_2 = (uint *)((int)param_2 + -2);
      bVar5 = *(byte *)param_2;
    }
    if (bVar13) {
      param_3 = (uint)*(byte *)((int)param_2 + -1);
    }
    if (bVar14) {
      *(byte *)((int)param_1 + -1) = bVar6;
      param_1 = (uint *)((int)param_1 + -2);
      *(byte *)param_1 = bVar5;
    }
    if (bVar13) {
      *(byte *)((int)param_1 + -1) = (byte)param_3;
    }
    return CONCAT44(param_2,param_1);
  }
  puVar3 = param_2;
  if (3 < param_3) {
    uVar8 = (uint)param_1 & 3;
    puVar1 = param_1;
    uVar9 = uVar8;
    if (uVar8 != 0) {
      bVar5 = (byte)*param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        uVar9 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar3;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar5 = (byte)*puVar3;
      }
      param_3 = (param_3 + uVar8) - 4;
      puVar3 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar3 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar9;
      }
      puVar1 = puVar3;
      if (uVar8 < 2) {
        puVar1 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar3 = bVar5;
      }
    }
    uVar8 = (uint)param_2 & 3;
    if (uVar8 == 0) {
      uVar8 = 0;
      while (uVar9 = param_3 - 0x20, 0x1f < param_3) {
        uVar8 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        *puVar1 = *param_2;
        puVar1[1] = uVar8;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        uVar8 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        puVar1[4] = uVar8;
        puVar1[5] = uVar10;
        puVar1[6] = uVar11;
        puVar1[7] = uVar12;
        puVar1 = puVar1 + 8;
        param_3 = uVar9;
      }
      if ((uVar9 & 0x10) != 0) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        param_2 = param_2 + 4;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        puVar1 = puVar1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1 = puVar1 + 2;
      }
      puVar2 = puVar1;
      puVar3 = param_2;
      if ((uVar9 & 4) != 0) {
        puVar3 = param_2 + 1;
        uVar8 = *param_2;
        puVar2 = puVar1 + 1;
        *puVar1 = uVar8;
      }
      uVar7 = (undefined2)uVar8;
      if ((uVar9 & 3) != 0) {
        bVar14 = (uVar9 & 2) != 0;
        param_3 = param_3 << 0x1f;
        bVar13 = (int)param_3 < 0;
        puVar1 = puVar3;
        if (bVar14) {
          puVar1 = (uint *)((int)puVar3 + 2);
          uVar7 = (undefined2)*puVar3;
        }
        puVar3 = puVar1;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar1 + 1);
          param_3 = (uint)(byte)*puVar1;
        }
        puVar1 = puVar2;
        if (bVar14) {
          puVar1 = (uint *)((int)puVar2 + 2);
          *(undefined2 *)puVar2 = uVar7;
        }
        puVar2 = puVar1;
        if (bVar13) {
          puVar2 = (uint *)((int)puVar1 + 1);
          *(byte *)puVar1 = (byte)param_3;
        }
        return CONCAT44(puVar3,puVar2);
      }
      return CONCAT44(puVar3,puVar2);
    }
    while( true ) {
      bVar5 = (byte)uVar9;
      if (param_3 < 8) break;
      puVar3 = param_2 + 1;
      uVar8 = *param_2;
      param_2 = param_2 + 2;
      uVar9 = *puVar3;
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = puVar1 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar1;
    puVar3 = param_2;
    if (-1 < (int)param_3) {
      puVar3 = param_2 + 1;
      uVar8 = *param_2;
      param_1 = puVar1 + 1;
      *puVar1 = uVar8;
    }
  }
  bVar6 = (byte)uVar8;
  bVar14 = (param_3 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar14) {
    pbVar4 = (byte *)((int)puVar3 + 1);
    bVar6 = (byte)*puVar3;
    puVar3 = (uint *)((int)puVar3 + 2);
    bVar5 = *pbVar4;
  }
  puVar1 = puVar3;
  if (bVar13) {
    puVar1 = (uint *)((int)puVar3 + 1);
    param_3 = (uint)(byte)*puVar3;
  }
  if (bVar14) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = bVar5;
  }
  puVar3 = param_1;
  if (bVar13) {
    puVar3 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar1,puVar3);
}



/* ---- FUN_1fff7cb2 @ 1fff7cb2 ---- */

undefined8 FUN_1fff7cb2(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  while (uVar2 = param_3 - 0x20, 0x1f < param_3) {
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    uVar10 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    param_4 = *(undefined4 *)(param_2 + 0x10);
    uVar8 = *(undefined4 *)(param_2 + 0x14);
    uVar9 = *(undefined4 *)(param_2 + 0x18);
    uVar10 = *(undefined4 *)(param_2 + 0x1c);
    param_2 = param_2 + 0x20;
    param_1[4] = param_4;
    param_1[5] = uVar8;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    param_1 = param_1 + 8;
    param_3 = uVar2;
  }
  if ((uVar2 & 0x10) != 0) {
    param_4 = *(undefined4 *)param_2;
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    uVar10 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar8 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = uVar8;
    param_1 = param_1 + 2;
  }
  puVar4 = param_1;
  pbVar5 = param_2;
  if ((uVar2 & 4) != 0) {
    pbVar5 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar4 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar7 = (undefined2)param_4;
  if ((uVar2 & 3) == 0) {
    return CONCAT44(pbVar5,puVar4);
  }
  bVar1 = (uVar2 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar11 = (int)param_3 < 0;
  pbVar6 = pbVar5;
  if (bVar1) {
    pbVar6 = pbVar5 + 2;
    uVar7 = *(undefined2 *)pbVar5;
  }
  pbVar5 = pbVar6;
  if (bVar11) {
    pbVar5 = pbVar6 + 1;
    param_3 = (uint)*pbVar6;
  }
  puVar3 = puVar4;
  if (bVar1) {
    puVar3 = (undefined4 *)((int)puVar4 + 2);
    *(undefined2 *)puVar4 = uVar7;
  }
  puVar4 = puVar3;
  if (bVar11) {
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(char *)puVar3 = (char)param_3;
  }
  return CONCAT44(pbVar5,puVar4);
}



/* ---- FUN_1fff7d16 @ 1fff7d16 ---- */

undefined4 * FUN_1fff7d16(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar2 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar2 = 0;
    }
    puVar1 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar1;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar5 = 4 - ((uint)param_1 & 3);
    puVar1 = param_1;
    if (iVar5 != 2) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    param_1 = puVar1;
    if (1 < iVar5) {
      param_1 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    param_2 = param_2 - iVar5;
  }
  bVar6 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar6);
  if ((param_2 & 0x10) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar4 = param_2 << 0x1e;
  puVar1 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar1 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar4 != 0) {
    puVar3 = puVar1;
    if ((int)uVar4 < 0) {
      puVar3 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    puVar1 = puVar3;
    if ((uVar4 & 0x40000000) != 0) {
      puVar1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
    }
    return puVar1;
  }
  return puVar1;
}



/* ---- FUN_1fff7d5a @ 1fff7d5a ---- */

undefined4 * FUN_1fff7d5a(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((param_2 & 0x10) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar3 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar3 != 0) {
    puVar1 = puVar2;
    if ((int)uVar3 < 0) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = 0;
    }
    puVar2 = puVar1;
    if ((uVar3 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)puVar1 = 0;
    }
    return puVar2;
  }
  return puVar2;
}



/* ---- FUN_1fff7da8 @ 1fff7da8 ---- */

undefined4 FUN_1fff7da8(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar1 = 1;
  }
  if (param_2 < (int)uVar1) {
    iVar4 = uVar1 - param_2;
  }
  else {
    iVar4 = 0;
  }
  param_1[6] = param_1[6] - (iVar4 + param_2 + param_4);
  if (-1 < (int)((uint)(byte)*param_1 << 0x1b)) {
    FUN_1fff78fc(param_1);
  }
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(param_3 + iVar3),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_1fff78fc(param_1);
  }
  while (0 < iVar4) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar4 = iVar4 + -1;
  }
  while (0 < param_2) {
    (*(code *)param_1[1])(*(byte *)((int)param_1 + param_2 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    param_2 = param_2 + -1;
  }
  FUN_1fff7928(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ---- FUN_1fff7e66 @ 1fff7e66 ---- */

void FUN_1fff7e66(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_1fff7e88 + 0x1fff7e78;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_1fff7a6c(auStack_40,param_3);
  return;
}



/* ---- FUN_1fff8022 @ 1fff8022 ---- */

void FUN_1fff8022(void)

{
  if ((*(int *)(DAT_1fff8040 + 4) == 0) && (*(code **)(DAT_1fff8040 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1fff8030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_1fff8040 + 0xc))();
    return;
  }
  return;
}



/* ---- FUN_1fff8044 @ 1fff8044 ---- */

undefined4 FUN_1fff8044(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* ---- FUN_1fff804a @ 1fff804a ---- */

undefined4 FUN_1fff804a(void)

{
  return 1;
}



/* ---- FUN_1fff8870 @ 1fff8870 ---- */

void FUN_1fff8870(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  
  FUN_1fff3144(0);
  puVar3 = DAT_1fff8bcc;
  iVar2 = DAT_1fff8bc8;
  uVar1 = DAT_1fff8bc4;
  iVar4 = 0;
  do {
    puVar5 = (uint *)(iVar2 + iVar4 * 0x20);
    if (((*puVar5 != 0) && (*puVar5 < uVar1)) || ((puVar5[4] != 0 && (puVar5[4] < uVar1)))) {
      do {
      } while ((int)((uint)(ushort)puVar5[7] << 0x19) < 0);
      *puVar3 = *puVar3 | 0x20;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  do {
  } while (-1 < (int)((uint)*DAT_1fff8bd0 << 0x18));
  *DAT_1fff8bd0 = 0x70;
  FUN_1fff3144();
  return;
}



/* ---- FUN_1fff88c0 @ 1fff88c0 ---- */

int FUN_1fff88c0(uint param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_1fff8bd4;
  if (param_1 < 0xc) {
    if (*(int *)param_2 == -1 && *(int *)(param_2 + 4) == -1) {
      return DAT_1fff8bd4 + 2;
    }
    uVar3 = FUN_1fff3144(0);
    FUN_1fff8870();
    pbVar1 = DAT_1fff8bd0;
    DAT_1fff8bd0[7] = 0x43;
    pbVar1[6] = (byte)param_1;
    pbVar1[0xb] = param_2[3];
    pbVar1[10] = param_2[2];
    pbVar1[9] = param_2[1];
    pbVar1[8] = *param_2;
    pbVar1[0xf] = param_2[7];
    pbVar1[0xe] = param_2[6];
    pbVar1[0xd] = param_2[5];
    pbVar1[0xc] = param_2[4];
    *pbVar1 = *pbVar1 | 0x80;
    uVar4 = FUN_1fff8b3a();
    FUN_1fff2a1c();
    FUN_1fff3144(uVar3);
    iVar2 = 0;
    if ((uVar4 & 1) != 0) {
      return DAT_1fff8bd4 + 3;
    }
  }
  return iVar2;
}



/* ---- FUN_1fff8936 @ 1fff8936 ---- */

bool FUN_1fff8936(byte param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_1fff3144(0);
  FUN_1fff8870();
  pbVar1 = DAT_1fff8bd0;
  DAT_1fff8bd0[7] = 0x41;
  pbVar1[6] = param_1;
  *pbVar1 = *pbVar1 | 0x80;
  iVar3 = FUN_1fff8b3a();
  param_2[3] = pbVar1[0xb];
  param_2[2] = pbVar1[10];
  param_2[1] = pbVar1[9];
  *param_2 = pbVar1[8];
  param_2[7] = pbVar1[0xf];
  param_2[6] = pbVar1[0xe];
  param_2[5] = pbVar1[0xd];
  param_2[4] = pbVar1[0xc];
  FUN_1fff2a1c();
  FUN_1fff3144(uVar2);
  return iVar3 == 0;
}



/* ---- FUN_1fff8996 @ 1fff8996 ---- */

bool FUN_1fff8996(uint param_1,uint param_2,byte param_3)

{
  byte *pbVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((((param_2 == 0) || ((param_2 & 0xf) != 0)) || ((param_1 & 0xf) != 0)) ||
     ((0x1fffff < param_1 || (0x200000 < param_1 + param_2)))) {
    bVar2 = false;
  }
  else {
    uVar3 = FUN_1fff3144(0);
    FUN_1fff8870();
    pbVar1 = DAT_1fff8bd0;
    DAT_1fff8bd0[7] = 1;
    pbVar1[6] = (byte)(param_1 >> 0x10);
    pbVar1[5] = (byte)(param_1 >> 8);
    pbVar1[4] = (byte)param_1;
    pbVar1[0xb] = (byte)(param_2 >> 0xc);
    pbVar1[10] = (byte)(param_2 >> 4);
    pbVar1[9] = param_3;
    *pbVar1 = *pbVar1 | 0x80;
    iVar4 = FUN_1fff8b3a();
    bVar2 = iVar4 == 0;
    FUN_1fff2a1c();
    FUN_1fff3144(uVar3);
  }
  return bVar2;
}



/* ---- FUN_1fff8a7e @ 1fff8a7e ---- */

int FUN_1fff8a7e(uint param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = DAT_1fff8bd8 + 1;
  if (param_2 != 0) {
    param_1 = param_1 >> 0xc;
    uVar4 = (param_2 - 1U >> 0xc) + 1;
    if (((param_1 < 0x200) && (uVar4 < 0x201)) && (param_1 + uVar4 < 0x201)) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar2 = FUN_1fff3144(0);
        FUN_1fff8870();
        pbVar1 = DAT_1fff8bd0;
        DAT_1fff8bd0[7] = 9;
        pbVar1[6] = (byte)((param_1 & 0xfffff) >> 4);
        pbVar1[5] = (byte)((param_1 & 0xfffff) << 4);
        pbVar1[4] = 0;
        *pbVar1 = *pbVar1 | 0x80;
        iVar3 = FUN_1fff8b3a();
        if (iVar3 != 0) {
          FUN_1fff2a1c();
          FUN_1fff3144(uVar2);
          return iVar5;
        }
        FUN_1fff2a1c();
        FUN_1fff3144(uVar2);
        param_1 = param_1 + 1;
      }
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* ---- FUN_1fff8b3a @ 1fff8b3a ---- */

byte FUN_1fff8b3a(void)

{
  do {
  } while (-1 < (int)((uint)*DAT_1fff8bd0 << 0x18));
  return *DAT_1fff8bd0 & 0x71;
}



/* ---- FUN_1fff8b4a @ 1fff8b4a ---- */

bool FUN_1fff8b4a(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    if (param_2[uVar4] != 0xff) {
      uVar2 = FUN_1fff3144(0);
      FUN_1fff8870();
      pbVar1 = DAT_1fff8bd0;
      DAT_1fff8bd0[7] = 7;
      pbVar1[6] = (byte)((uint)param_1 >> 0x10);
      pbVar1[5] = (byte)((uint)param_1 >> 8);
      pbVar1[4] = (byte)param_1;
      pbVar1[0xb] = param_2[3];
      pbVar1[10] = param_2[2];
      pbVar1[9] = param_2[1];
      pbVar1[8] = *param_2;
      pbVar1[0xf] = param_2[7];
      pbVar1[0xe] = param_2[6];
      pbVar1[0xd] = param_2[5];
      pbVar1[0xc] = param_2[4];
      *pbVar1 = *pbVar1 | 0x80;
      iVar3 = FUN_1fff8b3a();
      FUN_1fff2a1c();
      FUN_1fff3144(uVar2);
      return iVar3 == 0;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  return true;
}



