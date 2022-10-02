#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/rr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_rr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, rr_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, rr_geo_000678), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, rr_geo_000690), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, rr_geo_0006A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, rr_geo_0006C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, rr_geo_0006D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, rr_geo_0006F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, rr_geo_000708), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, rr_geo_000720), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, rr_geo_000738), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, rr_geo_000758), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, rr_geo_000770), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, rr_geo_000788), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, rr_geo_0007A0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, rr_geo_0007B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, rr_geo_0007D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, rr_geo_0007E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, rr_geo_000800), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15, rr_geo_000818), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16, rr_geo_000830), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM, rr_geo_0008C0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET, rr_geo_000848), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM, rr_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM, rr_geo_0008D8), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING, rr_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM, rr_geo_000908), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM, rr_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM, rr_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM, rr_geo_000920), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM, rr_geo_0008F0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES, rr_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1, rr_geo_000970), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2, rr_geo_000988), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3, rr_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4, rr_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_WMOTR_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, rr_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_RR, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_TTC, 0x01, 0x03, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLACK_BOBOMB, -5752, 6430, 6199, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_WMOTR_WOODEN_DOOR, -12209, 8281, 12994, 0, -45, 0, 0x00010000, bhvDoorWarp),
		OBJECT(MODEL_GOOMBA, -9067, 6841, 6587, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		MARIO_POS(0x01, 0, -11907, 8377, 12133),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -7835, 7394, 10750, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -10292, 7413, 8768, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -8734, 7362, 12073, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -5947, 6404, 6854, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -9796, 6952, 6328, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -11907, 8490, 12133, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(rr_area_1_collision),
		ROOMS(rr_area_1_collision_rooms),
		MACRO_OBJECTS(rr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_TOWER_TOP),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -11907, 8377, 12133),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
