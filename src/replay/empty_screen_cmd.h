uint32_t cmdbuf1[] = { /* empty_screen_gc2000 */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    
    /* set up */
    0x08010e05, /* LOAD_STATE (1) Base: 0x03814 Size: 1 Fixp: 0 */
    0x00000001, /*   [03814] GL.VERTEX_ELEMENT_CONFIG := 0x1 */
    0x08010380, /* LOAD_STATE (1) Base: 0x00E00 Size: 1 Fixp: 0 */
    0x00000001, /*   [00E00] RA.CONTROL := UNK0=1,LAST_VARYING_2X=0 */
    0x0801028b, /* LOAD_STATE (1) Base: 0x00A2C Size: 1 Fixp: 0 */
    0x34000001, /*   [00A2C] PA.W_CLIP_LIMIT := 0x34000001 */
    0x0801028a, /* LOAD_STATE (1) Base: 0x00A28 Size: 1 Fixp: 0 */
    0x00000011, /*   [00A28] PA.SYSTEM_MODE := UNK0=1,UNK4=1 */
    0x08010e13, /* LOAD_STATE (1) Base: 0x0384C Size: 1 Fixp: 0 */
    0x00000000, /*   [0384C] GL.API_MODE := OPENGL */
    0x08010306, /* LOAD_STATE (1) Base: 0x00C18 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C18] SE.CONFIG := LAST_PIXEL_ENABLE=0 */
    0x08010304, /* LOAD_STATE (1) Base: 0x00C10 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C10] SE.DEPTH_SCALE := 0.000000 */
    0x08010305, /* LOAD_STATE (1) Base: 0x00C14 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C14] SE.DEPTH_BIAS := 0.000000 */
    0x08010306, /* LOAD_STATE (1) Base: 0x00C18 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C18] SE.CONFIG := LAST_PIXEL_ENABLE=0 */
    0x08010304, /* LOAD_STATE (1) Base: 0x00C10 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C10] SE.DEPTH_SCALE := 0.000000 */
    0x08010305, /* LOAD_STATE (1) Base: 0x00C14 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C14] SE.DEPTH_BIAS := 0.000000 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000002, /*   [0380C] GL.FLUSH_CACHE := DEPTH=0,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x0801ffff, /* LOAD_STATE (1) Base: 0x3FFFC Size: 1 Fixp: 0 */
    0x00000000, /*   [3FFFC] DUMMY.DUMMY := 0x0 */
    0x0801059d, /* LOAD_STATE (1) Base: 0x01674 Size: 1 Fixp: 0 */
    0x00001cc0, /*   [01674] TS.DEPTH_AUTO_DISABLE_COUNT := 0x1cc0 */
    0x08030596, /* LOAD_STATE (1) Base: 0x01658 Size: 3 Fixp: 0 */
    0x15973000, /*   [01658] TS.COLOR_STATUS_BASE := ADDR_H */
    0x15900000, /*   [0165C] TS.COLOR_SURFACE_BASE := ADDR_G */
    0x00000000, /*   [01660] TS.COLOR_CLEAR_VALUE := 0x0 */
    0x08010595, /* LOAD_STATE (1) Base: 0x01654 Size: 1 Fixp: 0 */
    0x00000022, /*   [01654] TS.MEM_CONFIG := DEPTH_FAST_CLEAR=0,COLOR_FAST_CLEAR=1,DEPTH_16BPP=0,DEPTH_AUTO_DISABLE=0,COLOR_AUTO_DISABLE=1,DEPTH_COMPRESSION=0,MSAA=0,MSAA_FORMAT=A4R4G4B4,HDEPTH=0x0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000001, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=0,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x0801ffff, /* LOAD_STATE (1) Base: 0x3FFFC Size: 1 Fixp: 0 */
    0x00000000, /*   [3FFFC] DUMMY.DUMMY := 0x0 */
    0x08030599, /* LOAD_STATE (1) Base: 0x01664 Size: 3 Fixp: 0 */
    0x15973800, /*   [01664] TS.DEPTH_STATUS_BASE := ADDR_J */
    0x15985000, /*   [01668] TS.DEPTH_SURFACE_BASE := ADDR_I */
    0xffffffff, /*   [0166C] TS.DEPTH_CLEAR_VALUE := 0xffffffff */
    0x08010595, /* LOAD_STATE (1) Base: 0x01654 Size: 1 Fixp: 0 */
    0x0000006b, /*   [01654] TS.MEM_CONFIG := DEPTH_FAST_CLEAR=1,COLOR_FAST_CLEAR=1,DEPTH_16BPP=1,DEPTH_AUTO_DISABLE=0,COLOR_AUTO_DISABLE=1,DEPTH_COMPRESSION=1,MSAA=0,MSAA_FORMAT=A4R4G4B4,HDEPTH=0x0 */
    0x08010304, /* LOAD_STATE (1) Base: 0x00C10 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C10] SE.DEPTH_SCALE := 0.000000 */
    0x08010305, /* LOAD_STATE (1) Base: 0x00C14 Size: 1 Fixp: 0 */
    0x00000000, /*   [00C14] SE.DEPTH_BIAS := 0.000000 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010594, /* LOAD_STATE (1) Base: 0x01650 Size: 1 Fixp: 0 */
    0x00000001, /*   [01650] RS.FLUSH_CACHE := FLUSH=1 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010594, /* LOAD_STATE (1) Base: 0x01650 Size: 1 Fixp: 0 */
    0x00000001, /*   [01650] RS.FLUSH_CACHE := FLUSH=1 */
    0x08010e02, /* LOAD_STATE (1) Base: 0x03808 Size: 1 Fixp: 0 */
    0x00000705, /*   [03808] GL.SEMAPHORE_TOKEN := FROM=RA,TO=PE */
    0x08010f00, /* LOAD_STATE (1) Base: 0x03C00 Size: 1 Fixp: 0 */
    0x00000705, /*   [03C00] GL.STALL_TOKEN := FROM=RA,TO=PE,FLIP0=0,FLIP1=0 */
    0x08010581, /* LOAD_STATE (1) Base: 0x01604 Size: 1 Fixp: 0 */
    0x00000606, /*   [01604] RS.CONFIG := SOURCE_FORMAT=A8R8G8B8,DOWNSAMPLE_X=0,DOWNSAMPLE_Y=0,SOURCE_TILED=0,DEST_FORMAT=A8R8G8B8,DEST_TILED=0,SWAP_RB=0,FLIP=0 */
    0x0802058c, /* LOAD_STATE (1) Base: 0x01630 Size: 2 Fixp: 0 */
    0xffffffff, /*   [01630] RS.DITHER[0] := 0xffffffff */
    0xffffffff, /*   [01634] RS.DITHER[1] := 0xffffffff */
    0x00000000, /* PAD */
    0x08010584, /* LOAD_STATE (1) Base: 0x01610 Size: 1 Fixp: 0 */
    0x15973000, /*   [01610] RS.DEST_ADDR := ADDR_H */
    0x08010585, /* LOAD_STATE (1) Base: 0x01614 Size: 1 Fixp: 0 */
    0x00000200, /*   [01614] RS.DEST_STRIDE := STRIDE=0x200,MULTI=0,TILING=0 */
    0x08010590, /* LOAD_STATE (1) Base: 0x01640 Size: 1 Fixp: 0 */
    0x55555555, /*   [01640] RS.FILL_VALUE[0] := 0x55555555 */
    0x0801058f, /* LOAD_STATE (1) Base: 0x0163C Size: 1 Fixp: 0 */
    0x0001ffff, /*   [0163C] RS.CLEAR_CONTROL := BITS=0xffff,MODE=ENABLED1 */
    0x080105a8, /* LOAD_STATE (1) Base: 0x016A0 Size: 1 Fixp: 0 */
    0x00000000, /*   [016A0] RS.EXTRA_CONFIG := AA=0x0,ENDIAN=NO_SWAP */
    0x08010588, /* LOAD_STATE (1) Base: 0x01620 Size: 1 Fixp: 0 */
    0x00040080, /*   [01620] RS.WINDOW_SIZE := HEIGHT=4,WIDTH=128 */
    0x08010580, /* LOAD_STATE (1) Base: 0x01600 Size: 1 Fixp: 0 */
    0xbadabeeb, /*   [01600] RS.KICKER := 0xbadabeeb */
    0x08010598, /* LOAD_STATE (1) Base: 0x01660 Size: 1 Fixp: 0 */
    0xffff00ff, /*   [01660] TS.COLOR_CLEAR_VALUE := 0xffff00ff */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000002, /*   [0380C] GL.FLUSH_CACHE := DEPTH=0,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x0801ffff, /* LOAD_STATE (1) Base: 0x3FFFC Size: 1 Fixp: 0 */
    0x00000000, /*   [3FFFC] DUMMY.DUMMY := 0x0 */
    0x0801059d, /* LOAD_STATE (1) Base: 0x01674 Size: 1 Fixp: 0 */
    0x00001cc0, /*   [01674] TS.DEPTH_AUTO_DISABLE_COUNT := 0x1cc0 */
    0x08030596, /* LOAD_STATE (1) Base: 0x01658 Size: 3 Fixp: 0 */
    0x15973000, /*   [01658] TS.COLOR_STATUS_BASE := ADDR_H */
    0x15900000, /*   [0165C] TS.COLOR_SURFACE_BASE := ADDR_G */
    0xffff00ff, /*   [01660] TS.COLOR_CLEAR_VALUE := 0xffff00ff */
    0x08010595, /* LOAD_STATE (1) Base: 0x01654 Size: 1 Fixp: 0 */
    0x0000006b, /*   [01654] TS.MEM_CONFIG := DEPTH_FAST_CLEAR=1,COLOR_FAST_CLEAR=1,DEPTH_16BPP=1,DEPTH_AUTO_DISABLE=0,COLOR_AUTO_DISABLE=1,DEPTH_COMPRESSION=1,MSAA=0,MSAA_FORMAT=A4R4G4B4,HDEPTH=0x0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010581, /* LOAD_STATE (1) Base: 0x01604 Size: 1 Fixp: 0 */
    0x00004686, /*   [01604] RS.CONFIG := SOURCE_FORMAT=A8R8G8B8,DOWNSAMPLE_X=0,DOWNSAMPLE_Y=0,SOURCE_TILED=1,DEST_FORMAT=A8R8G8B8,DEST_TILED=1,SWAP_RB=0,FLIP=0 */
    0x08010583, /* LOAD_STATE (1) Base: 0x0160C Size: 1 Fixp: 0 */
    0x80001c00, /*   [0160C] RS.SOURCE_STRIDE := STRIDE=0x1c00,MULTI=0,TILING=1 */
    0x08010585, /* LOAD_STATE (1) Base: 0x01614 Size: 1 Fixp: 0 */
    0x80001c00, /*   [01614] RS.DEST_STRIDE := STRIDE=0x1c00,MULTI=0,TILING=1 */
    0x0802058c, /* LOAD_STATE (1) Base: 0x01630 Size: 2 Fixp: 0 */
    0xffffffff, /*   [01630] RS.DITHER[0] := 0xffffffff */
    0xffffffff, /*   [01634] RS.DITHER[1] := 0xffffffff */
    0x010001c0, /* PAD */
    0x0801058f, /* LOAD_STATE (1) Base: 0x0163C Size: 1 Fixp: 0 */
    0x00000000, /*   [0163C] RS.CLEAR_CONTROL := BITS=0x0,MODE=DISABLED */
    0x080105a8, /* LOAD_STATE (1) Base: 0x016A0 Size: 1 Fixp: 0 */
    0x00000000, /*   [016A0] RS.EXTRA_CONFIG := AA=0x0,ENDIAN=NO_SWAP */
    0x08010582, /* LOAD_STATE (1) Base: 0x01608 Size: 1 Fixp: 0 */
    0x15900000, /*   [01608] RS.SOURCE_ADDR := ADDR_G */
    0x08010584, /* LOAD_STATE (1) Base: 0x01610 Size: 1 Fixp: 0 */
    0x15900000, /*   [01610] RS.DEST_ADDR := ADDR_G */
    0x08010588, /* LOAD_STATE (1) Base: 0x01620 Size: 1 Fixp: 0 */
    0x010001c0, /*   [01620] RS.WINDOW_SIZE := HEIGHT=256,WIDTH=448 */
    0x08010580, /* LOAD_STATE (1) Base: 0x01600 Size: 1 Fixp: 0 */
    0xbadabeeb  /*   [01600] RS.KICKER := 0xbadabeeb */
};

uint32_t cmdbuf2[] = { /* seq 101 */
    0x08010e03, /* PAD */
    0x00000003, /* PAD */
    0x08010594, /* PAD */
    0x00000001, /* PAD */
    0x08010e03, /* PAD */
    0x00000001, /* PAD */
    0x0801ffff, /* PAD */
    0x00000000, /* PAD */
    0x08010594, /* LOAD_STATE (1) Base: 0x01650 Size: 1 Fixp: 0 */
    0x00000001, /*   [01650] RS.FLUSH_CACHE := FLUSH=1 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000002, /*   [0380C] GL.FLUSH_CACHE := DEPTH=0,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x0801ffff, /* LOAD_STATE (1) Base: 0x3FFFC Size: 1 Fixp: 0 */
    0x00000000, /*   [3FFFC] DUMMY.DUMMY := 0x0 */
    0x08010595, /* LOAD_STATE (1) Base: 0x01654 Size: 1 Fixp: 0 */
    0x00000049, /*   [01654] TS.MEM_CONFIG := DEPTH_FAST_CLEAR=1,COLOR_FAST_CLEAR=0,DEPTH_16BPP=1,DEPTH_AUTO_DISABLE=0,COLOR_AUTO_DISABLE=0,DEPTH_COMPRESSION=1,MSAA=0,MSAA_FORMAT=A4R4G4B4,HDEPTH=0x0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   [0380C] GL.FLUSH_CACHE := DEPTH=1,COLOR=1,TEXTURE=0,PE2D=0,TEXTUREVS=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010581, /* LOAD_STATE (1) Base: 0x01604 Size: 1 Fixp: 0 */
    0x20000686, /*   [01604] RS.CONFIG := SOURCE_FORMAT=A8R8G8B8,DOWNSAMPLE_X=0,DOWNSAMPLE_Y=0,SOURCE_TILED=1,DEST_FORMAT=A8R8G8B8,DEST_TILED=0,SWAP_RB=1,FLIP=0 */
    0x08010583, /* LOAD_STATE (1) Base: 0x0160C Size: 1 Fixp: 0 */
    0x80001c00, /*   [0160C] RS.SOURCE_STRIDE := STRIDE=0x1c00,MULTI=0,TILING=1 */
    0x08010585, /* LOAD_STATE (1) Base: 0x01614 Size: 1 Fixp: 0 */
    0x00000700, /*   [01614] RS.DEST_STRIDE := STRIDE=0x700,MULTI=0,TILING=0 */
    0x0802058c, /* LOAD_STATE (1) Base: 0x01630 Size: 2 Fixp: 0 */
    0xffffffff, /*   [01630] RS.DITHER[0] := 0xffffffff */
    0xffffffff, /*   [01634] RS.DITHER[1] := 0xffffffff */
    0x00000000, /* PAD */
    0x0801058f, /* LOAD_STATE (1) Base: 0x0163C Size: 1 Fixp: 0 */
    0x00000000, /*   [0163C] RS.CLEAR_CONTROL := BITS=0x0,MODE=DISABLED */
    0x080105a8, /* LOAD_STATE (1) Base: 0x016A0 Size: 1 Fixp: 0 */
    0x00000000, /*   [016A0] RS.EXTRA_CONFIG := AA=0x0,ENDIAN=NO_SWAP */
    0x08010582, /* LOAD_STATE (1) Base: 0x01608 Size: 1 Fixp: 0 */
    0x15900000, /*   [01608] RS.SOURCE_ADDR := ADDR_G */
    0x08010584, /* LOAD_STATE (1) Base: 0x01610 Size: 1 Fixp: 0 */
    0x15a27c00, /*   [01610] RS.DEST_ADDR := ADDR_L */
    0x08010588, /* LOAD_STATE (1) Base: 0x01620 Size: 1 Fixp: 0 */
    0x010001c0, /*   [01620] RS.WINDOW_SIZE := HEIGHT=256,WIDTH=448 */
    0x08010580, /* LOAD_STATE (1) Base: 0x01600 Size: 1 Fixp: 0 */
    0xbadabeeb  /*   [01600] RS.KICKER := 0xbadabeeb */
};

uint32_t cmdbuf3[] = { /* seq 101 */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    0x00000000, /* PAD */
    
    /* copy pixels from render target to output bitmap */
    0x08010e03, /* LOAD_STATE (1) Base: 0x0380C Size: 1 Fixp: 0 */
    0x00000003, /*   GLOBAL.FLUSH_CACHE := DEPTH=1,COLOR=1,3D_TEXTURE=0,2D=0,UNK4=0,SHADER_L1=0,SHADER_L2=0 */
    0x08010581, /* LOAD_STATE (1) Base: 0x01604 Size: 1 Fixp: 0 */
    0x00000585, /*   RS.CONFIG := SOURCE_FORMAT=X8R8G8B8,UNK7=1,DEST_FORMAT=X8R8G8B8,UNK14=0,SWAP_RB=0 */
    0x08010583, /* LOAD_STATE (1) Base: 0x0160C Size: 1 Fixp: 0 */
    0x80001c00, /*   RS.SOURCE_STRIDE := 0x80001c00 */
    0x08010585, /* LOAD_STATE (1) Base: 0x01614 Size: 1 Fixp: 0 */
    0x00000640, /*   RS.DEST_STRIDE := 0x640 */
    0x0801058c, /* LOAD_STATE (1) Base: 0x01630 Size: 1 Fixp: 0 */
    0xffffffff, /*   RS.DITHER[0] := 0xffffffff */
    0x0801058d, /* LOAD_STATE (1) Base: 0x01634 Size: 1 Fixp: 0 */
    0xffffffff, /*   RS.DITHER[1] := 0xffffffff */
    0x0801058f, /* LOAD_STATE (1) Base: 0x0163C Size: 1 Fixp: 0 */
    0x00000000, /*   RS.CLEAR_CONTROL := BITS=0x0,MODE=0x0 */
    0x080105a8, /* LOAD_STATE (1) Base: 0x016A0 Size: 1 Fixp: 0 */
    0x00000000, /*   RS.EXTRA_CONFIG := AA=0x0,ENDIAN=NO_SWAP */
    0x08010582, /* LOAD_STATE (1) Base: 0x01608 Size: 1 Fixp: 0 */
    0x7f2c8700, /*   RS.SOURCE_ADDR := *rt_physical */
    0x08010584, /* LOAD_STATE (1) Base: 0x01610 Size: 1 Fixp: 0 */
    0x7f338700, /*   RS.DEST_ADDR := *bmp_physical */
    0x08010588, /* LOAD_STATE (1) Base: 0x01620 Size: 1 Fixp: 0 */
    0x00f00190, /*   RS.WINDOW_SIZE := HEIGHT=240,WIDTH=400 */
    0x08010580, /* LOAD_STATE (1) Base: 0x01600 Size: 1 Fixp: 0 */
    0xbeebbeeb  /*   RS.KICKER := 0xbeebbeeb */
};