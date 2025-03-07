## [:rewind: Lua Reference](lua.md)

---

1 | [2](functions-2.md) | [3](functions-3.md) | [4](functions-4.md) | [next >](functions-2.md)]

---

# Supported Functions

- manually written functions
   - [define_custom_obj_fields](#define_custom_obj_fields)
   - [network_init_object](#network_init_object)
   - [network_send_object](#network_send_object)
   - [network_send_to](#network_send_to)
   - [network_send](#network_send)
   - [djui_hud_render_texture](#djui_hud_render_texture)
   - [get_texture_info](#get_texture_info)
   - [djui_hud_render_texture_interpolated](#djui_hud_render_texture_interpolated)

<br />

- behavior_actions.h
   - [arc_to_goal_pos](functions-2.md#arc_to_goal_pos)
   - [bhv_1up_common_init](functions-2.md#bhv_1up_common_init)
   - [bhv_1up_hidden_in_pole_loop](functions-2.md#bhv_1up_hidden_in_pole_loop)
   - [bhv_1up_hidden_in_pole_spawner_loop](functions-2.md#bhv_1up_hidden_in_pole_spawner_loop)
   - [bhv_1up_hidden_in_pole_trigger_loop](functions-2.md#bhv_1up_hidden_in_pole_trigger_loop)
   - [bhv_1up_hidden_loop](functions-2.md#bhv_1up_hidden_loop)
   - [bhv_1up_hidden_trigger_loop](functions-2.md#bhv_1up_hidden_trigger_loop)
   - [bhv_1up_init](functions-2.md#bhv_1up_init)
   - [bhv_1up_jump_on_approach_loop](functions-2.md#bhv_1up_jump_on_approach_loop)
   - [bhv_1up_loop](functions-2.md#bhv_1up_loop)
   - [bhv_1up_running_away_loop](functions-2.md#bhv_1up_running_away_loop)
   - [bhv_1up_sliding_loop](functions-2.md#bhv_1up_sliding_loop)
   - [bhv_1up_walking_loop](functions-2.md#bhv_1up_walking_loop)
   - [bhv_act_selector_init](functions-2.md#bhv_act_selector_init)
   - [bhv_act_selector_loop](functions-2.md#bhv_act_selector_loop)
   - [bhv_act_selector_star_type_loop](functions-2.md#bhv_act_selector_star_type_loop)
   - [bhv_activated_back_and_forth_platform_init](functions-2.md#bhv_activated_back_and_forth_platform_init)
   - [bhv_activated_back_and_forth_platform_update](functions-2.md#bhv_activated_back_and_forth_platform_update)
   - [bhv_alpha_boo_key_loop](functions-2.md#bhv_alpha_boo_key_loop)
   - [bhv_ambient_sounds_init](functions-2.md#bhv_ambient_sounds_init)
   - [bhv_animated_texture_loop](functions-2.md#bhv_animated_texture_loop)
   - [bhv_animates_on_floor_switch_press_init](functions-2.md#bhv_animates_on_floor_switch_press_init)
   - [bhv_animates_on_floor_switch_press_loop](functions-2.md#bhv_animates_on_floor_switch_press_loop)
   - [bhv_arrow_lift_loop](functions-2.md#bhv_arrow_lift_loop)
   - [bhv_bbh_tilting_trap_platform_loop](functions-2.md#bhv_bbh_tilting_trap_platform_loop)
   - [bhv_beta_boo_key_loop](functions-2.md#bhv_beta_boo_key_loop)
   - [bhv_beta_bowser_anchor_loop](functions-2.md#bhv_beta_bowser_anchor_loop)
   - [bhv_beta_chest_bottom_init](functions-2.md#bhv_beta_chest_bottom_init)
   - [bhv_beta_chest_bottom_loop](functions-2.md#bhv_beta_chest_bottom_loop)
   - [bhv_beta_chest_lid_loop](functions-2.md#bhv_beta_chest_lid_loop)
   - [bhv_beta_fish_splash_spawner_loop](functions-2.md#bhv_beta_fish_splash_spawner_loop)
   - [bhv_beta_holdable_object_init](functions-2.md#bhv_beta_holdable_object_init)
   - [bhv_beta_holdable_object_loop](functions-2.md#bhv_beta_holdable_object_loop)
   - [bhv_beta_moving_flames_loop](functions-2.md#bhv_beta_moving_flames_loop)
   - [bhv_beta_moving_flames_spawn_loop](functions-2.md#bhv_beta_moving_flames_spawn_loop)
   - [bhv_beta_trampoline_spring_loop](functions-2.md#bhv_beta_trampoline_spring_loop)
   - [bhv_beta_trampoline_top_loop](functions-2.md#bhv_beta_trampoline_top_loop)
   - [bhv_big_boo_loop](functions-2.md#bhv_big_boo_loop)
   - [bhv_big_boulder_generator_loop](functions-2.md#bhv_big_boulder_generator_loop)
   - [bhv_big_boulder_init](functions-2.md#bhv_big_boulder_init)
   - [bhv_big_boulder_loop](functions-2.md#bhv_big_boulder_loop)
   - [bhv_big_bully_init](functions-2.md#bhv_big_bully_init)
   - [bhv_big_bully_with_minions_init](functions-2.md#bhv_big_bully_with_minions_init)
   - [bhv_big_bully_with_minions_loop](functions-2.md#bhv_big_bully_with_minions_loop)
   - [bhv_bird_update](functions-2.md#bhv_bird_update)
   - [bhv_birds_sound_loop](functions-2.md#bhv_birds_sound_loop)
   - [bhv_bitfs_sinking_cage_platform_loop](functions-2.md#bhv_bitfs_sinking_cage_platform_loop)
   - [bhv_bitfs_sinking_platform_loop](functions-2.md#bhv_bitfs_sinking_platform_loop)
   - [bhv_black_smoke_bowser_loop](functions-2.md#bhv_black_smoke_bowser_loop)
   - [bhv_black_smoke_mario_loop](functions-2.md#bhv_black_smoke_mario_loop)
   - [bhv_black_smoke_upward_loop](functions-2.md#bhv_black_smoke_upward_loop)
   - [bhv_blue_bowser_flame_init](functions-2.md#bhv_blue_bowser_flame_init)
   - [bhv_blue_bowser_flame_loop](functions-2.md#bhv_blue_bowser_flame_loop)
   - [bhv_blue_coin_jumping_loop](functions-2.md#bhv_blue_coin_jumping_loop)
   - [bhv_blue_coin_sliding_jumping_init](functions-2.md#bhv_blue_coin_sliding_jumping_init)
   - [bhv_blue_coin_sliding_loop](functions-2.md#bhv_blue_coin_sliding_loop)
   - [bhv_blue_coin_switch_loop](functions-2.md#bhv_blue_coin_switch_loop)
   - [bhv_blue_fish_movement_loop](functions-2.md#bhv_blue_fish_movement_loop)
   - [bhv_blue_flames_group_loop](functions-2.md#bhv_blue_flames_group_loop)
   - [bhv_bob_pit_bowling_ball_init](functions-2.md#bhv_bob_pit_bowling_ball_init)
   - [bhv_bob_pit_bowling_ball_loop](functions-2.md#bhv_bob_pit_bowling_ball_loop)
   - [bhv_bobomb_anchor_mario_loop](functions-2.md#bhv_bobomb_anchor_mario_loop)
   - [bhv_bobomb_buddy_init](functions-2.md#bhv_bobomb_buddy_init)
   - [bhv_bobomb_buddy_loop](functions-2.md#bhv_bobomb_buddy_loop)
   - [bhv_bobomb_bully_death_smoke_init](functions-2.md#bhv_bobomb_bully_death_smoke_init)
   - [bhv_bobomb_explosion_bubble_init](functions-2.md#bhv_bobomb_explosion_bubble_init)
   - [bhv_bobomb_explosion_bubble_loop](functions-2.md#bhv_bobomb_explosion_bubble_loop)
   - [bhv_bobomb_fuse_smoke_init](functions-2.md#bhv_bobomb_fuse_smoke_init)
   - [bhv_bobomb_init](functions-2.md#bhv_bobomb_init)
   - [bhv_bobomb_loop](functions-2.md#bhv_bobomb_loop)
   - [bhv_boo_boss_spawned_bridge_loop](functions-2.md#bhv_boo_boss_spawned_bridge_loop)
   - [bhv_boo_cage_init](functions-2.md#bhv_boo_cage_init)
   - [bhv_boo_cage_loop](functions-2.md#bhv_boo_cage_loop)
   - [bhv_boo_in_castle_loop](functions-2.md#bhv_boo_in_castle_loop)
   - [bhv_boo_init](functions-2.md#bhv_boo_init)
   - [bhv_boo_loop](functions-2.md#bhv_boo_loop)
   - [bhv_boo_with_cage_init](functions-2.md#bhv_boo_with_cage_init)
   - [bhv_boo_with_cage_loop](functions-2.md#bhv_boo_with_cage_loop)
   - [bhv_book_switch_loop](functions-2.md#bhv_book_switch_loop)
   - [bhv_bookend_spawn_loop](functions-2.md#bhv_bookend_spawn_loop)
   - [bhv_bouncing_fireball_flame_loop](functions-2.md#bhv_bouncing_fireball_flame_loop)
   - [bhv_bouncing_fireball_loop](functions-2.md#bhv_bouncing_fireball_loop)
   - [bhv_bowling_ball_init](functions-2.md#bhv_bowling_ball_init)
   - [bhv_bowling_ball_loop](functions-2.md#bhv_bowling_ball_loop)
   - [bhv_bowser_body_anchor_init](functions-2.md#bhv_bowser_body_anchor_init)
   - [bhv_bowser_body_anchor_loop](functions-2.md#bhv_bowser_body_anchor_loop)
   - [bhv_bowser_bomb_explosion_loop](functions-2.md#bhv_bowser_bomb_explosion_loop)
   - [bhv_bowser_bomb_loop](functions-2.md#bhv_bowser_bomb_loop)
   - [bhv_bowser_bomb_smoke_loop](functions-2.md#bhv_bowser_bomb_smoke_loop)
   - [bhv_bowser_course_red_coin_star_loop](functions-2.md#bhv_bowser_course_red_coin_star_loop)
   - [bhv_bowser_flame_spawn_loop](functions-2.md#bhv_bowser_flame_spawn_loop)
   - [bhv_bowser_init](functions-2.md#bhv_bowser_init)
   - [bhv_bowser_key_course_exit_loop](functions-2.md#bhv_bowser_key_course_exit_loop)
   - [bhv_bowser_key_init](functions-2.md#bhv_bowser_key_init)
   - [bhv_bowser_key_loop](functions-2.md#bhv_bowser_key_loop)
   - [bhv_bowser_key_unlock_door_loop](functions-2.md#bhv_bowser_key_unlock_door_loop)
   - [bhv_bowser_loop](functions-2.md#bhv_bowser_loop)
   - [bhv_bowser_shock_wave_loop](functions-2.md#bhv_bowser_shock_wave_loop)
   - [bhv_bowser_tail_anchor_init](functions-2.md#bhv_bowser_tail_anchor_init)
   - [bhv_bowser_tail_anchor_loop](functions-2.md#bhv_bowser_tail_anchor_loop)
   - [bhv_bowsers_sub_loop](functions-2.md#bhv_bowsers_sub_loop)
   - [bhv_breakable_box_loop](functions-2.md#bhv_breakable_box_loop)
   - [bhv_breakable_box_small_init](functions-2.md#bhv_breakable_box_small_init)
   - [bhv_breakable_box_small_loop](functions-2.md#bhv_breakable_box_small_loop)
   - [bhv_bub_loop](functions-2.md#bhv_bub_loop)
   - [bhv_bub_spawner_loop](functions-2.md#bhv_bub_spawner_loop)
   - [bhv_bubba_loop](functions-2.md#bhv_bubba_loop)
   - [bhv_bubble_cannon_barrel_loop](functions-2.md#bhv_bubble_cannon_barrel_loop)
   - [bhv_bubble_maybe_loop](functions-2.md#bhv_bubble_maybe_loop)
   - [bhv_bubble_player_loop](functions-2.md#bhv_bubble_player_loop)
   - [bhv_bubble_splash_init](functions-2.md#bhv_bubble_splash_init)
   - [bhv_bubble_wave_init](functions-2.md#bhv_bubble_wave_init)
   - [bhv_bullet_bill_init](functions-2.md#bhv_bullet_bill_init)
   - [bhv_bullet_bill_loop](functions-2.md#bhv_bullet_bill_loop)
   - [bhv_bully_loop](functions-2.md#bhv_bully_loop)
   - [bhv_butterfly_init](functions-2.md#bhv_butterfly_init)
   - [bhv_butterfly_loop](functions-2.md#bhv_butterfly_loop)
   - [bhv_camera_lakitu_init](functions-2.md#bhv_camera_lakitu_init)
   - [bhv_camera_lakitu_update](functions-2.md#bhv_camera_lakitu_update)
   - [bhv_cannon_barrel_loop](functions-2.md#bhv_cannon_barrel_loop)
   - [bhv_cannon_base_loop](functions-2.md#bhv_cannon_base_loop)
   - [bhv_cannon_base_unused_loop](functions-2.md#bhv_cannon_base_unused_loop)
   - [bhv_cannon_closed_init](functions-2.md#bhv_cannon_closed_init)
   - [bhv_cannon_closed_loop](functions-2.md#bhv_cannon_closed_loop)
   - [bhv_cap_switch_loop](functions-2.md#bhv_cap_switch_loop)
   - [bhv_castle_cannon_grate_init](functions-2.md#bhv_castle_cannon_grate_init)
   - [bhv_castle_flag_init](functions-2.md#bhv_castle_flag_init)
   - [bhv_castle_floor_trap_init](functions-2.md#bhv_castle_floor_trap_init)
   - [bhv_castle_floor_trap_loop](functions-2.md#bhv_castle_floor_trap_loop)
   - [bhv_ccm_touched_star_spawn_loop](functions-2.md#bhv_ccm_touched_star_spawn_loop)
   - [bhv_celebration_star_init](functions-2.md#bhv_celebration_star_init)
   - [bhv_celebration_star_loop](functions-2.md#bhv_celebration_star_loop)
   - [bhv_celebration_star_sparkle_loop](functions-2.md#bhv_celebration_star_sparkle_loop)
   - [bhv_chain_chomp_chain_part_update](functions-2.md#bhv_chain_chomp_chain_part_update)
   - [bhv_chain_chomp_gate_init](functions-2.md#bhv_chain_chomp_gate_init)
   - [bhv_chain_chomp_gate_update](functions-2.md#bhv_chain_chomp_gate_update)
   - [bhv_chain_chomp_update](functions-2.md#bhv_chain_chomp_update)
   - [bhv_checkerboard_elevator_group_init](functions-2.md#bhv_checkerboard_elevator_group_init)
   - [bhv_checkerboard_elevator_group_loop](functions-2.md#bhv_checkerboard_elevator_group_loop)
   - [bhv_checkerboard_platform_init](functions-2.md#bhv_checkerboard_platform_init)
   - [bhv_checkerboard_platform_loop](functions-2.md#bhv_checkerboard_platform_loop)
   - [bhv_chuckya_anchor_mario_loop](functions-2.md#bhv_chuckya_anchor_mario_loop)
   - [bhv_chuckya_loop](functions-2.md#bhv_chuckya_loop)
   - [bhv_circling_amp_init](functions-2.md#bhv_circling_amp_init)
   - [bhv_circling_amp_loop](functions-2.md#bhv_circling_amp_loop)
   - [bhv_clam_loop](functions-2.md#bhv_clam_loop)
   - [bhv_cloud_part_update](functions-2.md#bhv_cloud_part_update)
   - [bhv_cloud_update](functions-2.md#bhv_cloud_update)
   - [bhv_coffin_loop](functions-2.md#bhv_coffin_loop)
   - [bhv_coffin_spawner_loop](functions-2.md#bhv_coffin_spawner_loop)
   - [bhv_coin_formation_init](functions-2.md#bhv_coin_formation_init)
   - [bhv_coin_formation_loop](functions-2.md#bhv_coin_formation_loop)
   - [bhv_coin_formation_spawn_loop](functions-2.md#bhv_coin_formation_spawn_loop)
   - [bhv_coin_init](functions-2.md#bhv_coin_init)
   - [bhv_coin_inside_boo_loop](functions-2.md#bhv_coin_inside_boo_loop)
   - [bhv_coin_loop](functions-2.md#bhv_coin_loop)
   - [bhv_coin_sparkles_loop](functions-2.md#bhv_coin_sparkles_loop)
   - [bhv_collect_star_init](functions-2.md#bhv_collect_star_init)
   - [bhv_collect_star_loop](functions-2.md#bhv_collect_star_loop)
   - [bhv_controllable_platform_init](functions-2.md#bhv_controllable_platform_init)
   - [bhv_controllable_platform_loop](functions-2.md#bhv_controllable_platform_loop)
   - [bhv_controllable_platform_sub_loop](functions-2.md#bhv_controllable_platform_sub_loop)
   - [bhv_courtyard_boo_triplet_init](functions-2.md#bhv_courtyard_boo_triplet_init)
   - [bhv_ddd_moving_pole_loop](functions-2.md#bhv_ddd_moving_pole_loop)
   - [bhv_ddd_pole_init](functions-2.md#bhv_ddd_pole_init)
   - [bhv_ddd_pole_update](functions-2.md#bhv_ddd_pole_update)
   - [bhv_ddd_warp_loop](functions-2.md#bhv_ddd_warp_loop)
   - [bhv_decorative_pendulum_init](functions-2.md#bhv_decorative_pendulum_init)
   - [bhv_decorative_pendulum_loop](functions-2.md#bhv_decorative_pendulum_loop)
   - [bhv_donut_platform_spawner_update](functions-2.md#bhv_donut_platform_spawner_update)
   - [bhv_donut_platform_update](functions-2.md#bhv_donut_platform_update)
   - [bhv_door_init](functions-2.md#bhv_door_init)
   - [bhv_door_loop](functions-2.md#bhv_door_loop)
   - [bhv_dorrie_update](functions-2.md#bhv_dorrie_update)
   - [bhv_elevator_init](functions-2.md#bhv_elevator_init)
   - [bhv_elevator_loop](functions-2.md#bhv_elevator_loop)
   - [bhv_end_birds_1_loop](functions-2.md#bhv_end_birds_1_loop)
   - [bhv_end_birds_2_loop](functions-2.md#bhv_end_birds_2_loop)
   - [bhv_enemy_lakitu_update](functions-2.md#bhv_enemy_lakitu_update)
   - [bhv_exclamation_box_init](functions-2.md#bhv_exclamation_box_init)
   - [bhv_exclamation_box_loop](functions-2.md#bhv_exclamation_box_loop)
   - [bhv_explosion_init](functions-2.md#bhv_explosion_init)
   - [bhv_explosion_loop](functions-2.md#bhv_explosion_loop)
   - [bhv_eyerok_boss_init](functions-2.md#bhv_eyerok_boss_init)
   - [bhv_eyerok_boss_loop](functions-2.md#bhv_eyerok_boss_loop)
   - [bhv_eyerok_hand_loop](functions-2.md#bhv_eyerok_hand_loop)
   - [bhv_fading_warp_loop](functions-2.md#bhv_fading_warp_loop)
   - [bhv_falling_bowser_platform_loop](functions-2.md#bhv_falling_bowser_platform_loop)
   - [bhv_falling_pillar_hitbox_loop](functions-2.md#bhv_falling_pillar_hitbox_loop)
   - [bhv_falling_pillar_init](functions-2.md#bhv_falling_pillar_init)
   - [bhv_falling_pillar_loop](functions-2.md#bhv_falling_pillar_loop)
   - [bhv_ferris_wheel_axle_init](functions-2.md#bhv_ferris_wheel_axle_init)
   - [bhv_ferris_wheel_platform_update](functions-2.md#bhv_ferris_wheel_platform_update)
   - [bhv_fire_piranha_plant_init](functions-2.md#bhv_fire_piranha_plant_init)
   - [bhv_fire_piranha_plant_update](functions-2.md#bhv_fire_piranha_plant_update)
   - [bhv_fire_spitter_update](functions-2.md#bhv_fire_spitter_update)
   - [bhv_fish_group_loop](functions-2.md#bhv_fish_group_loop)
   - [bhv_fish_loop](functions-2.md#bhv_fish_loop)
   - [bhv_fish_spawner_loop](functions-2.md#bhv_fish_spawner_loop)
   - [bhv_flame_bouncing_init](functions-2.md#bhv_flame_bouncing_init)
   - [bhv_flame_bouncing_loop](functions-2.md#bhv_flame_bouncing_loop)
   - [bhv_flame_bowser_init](functions-2.md#bhv_flame_bowser_init)
   - [bhv_flame_bowser_loop](functions-2.md#bhv_flame_bowser_loop)
   - [bhv_flame_floating_landing_init](functions-2.md#bhv_flame_floating_landing_init)
   - [bhv_flame_floating_landing_loop](functions-2.md#bhv_flame_floating_landing_loop)
   - [bhv_flame_large_burning_out_init](functions-2.md#bhv_flame_large_burning_out_init)
   - [bhv_flame_mario_loop](functions-2.md#bhv_flame_mario_loop)
   - [bhv_flame_moving_forward_growing_init](functions-2.md#bhv_flame_moving_forward_growing_init)
   - [bhv_flame_moving_forward_growing_loop](functions-2.md#bhv_flame_moving_forward_growing_loop)
   - [bhv_flamethrower_flame_loop](functions-2.md#bhv_flamethrower_flame_loop)
   - [bhv_flamethrower_loop](functions-2.md#bhv_flamethrower_loop)
   - [bhv_floating_platform_loop](functions-2.md#bhv_floating_platform_loop)
   - [bhv_floor_trap_in_castle_loop](functions-2.md#bhv_floor_trap_in_castle_loop)
   - [bhv_fly_guy_flame_loop](functions-2.md#bhv_fly_guy_flame_loop)
   - [bhv_fly_guy_update](functions-2.md#bhv_fly_guy_update)
   - [bhv_flying_bookend_loop](functions-2.md#bhv_flying_bookend_loop)
   - [bhv_free_bowling_ball_init](functions-2.md#bhv_free_bowling_ball_init)
   - [bhv_free_bowling_ball_loop](functions-2.md#bhv_free_bowling_ball_loop)
   - [bhv_generic_bowling_ball_spawner_init](functions-2.md#bhv_generic_bowling_ball_spawner_init)
   - [bhv_generic_bowling_ball_spawner_loop](functions-2.md#bhv_generic_bowling_ball_spawner_loop)
   - [bhv_giant_pole_loop](functions-2.md#bhv_giant_pole_loop)
   - [bhv_golden_coin_sparkles_loop](functions-2.md#bhv_golden_coin_sparkles_loop)
   - [bhv_goomba_init](functions-2.md#bhv_goomba_init)
   - [bhv_goomba_triplet_spawner_update](functions-2.md#bhv_goomba_triplet_spawner_update)
   - [bhv_goomba_update](functions-2.md#bhv_goomba_update)
   - [bhv_grand_star_init](functions-2.md#bhv_grand_star_init)
   - [bhv_grand_star_loop](functions-2.md#bhv_grand_star_loop)
   - [bhv_grindel_thwomp_loop](functions-2.md#bhv_grindel_thwomp_loop)
   - [bhv_ground_sand_init](functions-2.md#bhv_ground_sand_init)
   - [bhv_ground_snow_init](functions-2.md#bhv_ground_snow_init)
   - [bhv_haunted_bookshelf_loop](functions-2.md#bhv_haunted_bookshelf_loop)
   - [bhv_haunted_bookshelf_manager_loop](functions-2.md#bhv_haunted_bookshelf_manager_loop)
   - [bhv_haunted_chair_init](functions-2.md#bhv_haunted_chair_init)
   - [bhv_haunted_chair_loop](functions-2.md#bhv_haunted_chair_loop)
   - [bhv_heave_ho_loop](functions-2.md#bhv_heave_ho_loop)
   - [bhv_heave_ho_throw_mario_loop](functions-2.md#bhv_heave_ho_throw_mario_loop)
   - [bhv_hidden_blue_coin_loop](functions-2.md#bhv_hidden_blue_coin_loop)
   - [bhv_hidden_object_loop](functions-2.md#bhv_hidden_object_loop)
   - [bhv_hidden_red_coin_star_init](functions-2.md#bhv_hidden_red_coin_star_init)
   - [bhv_hidden_red_coin_star_loop](functions-2.md#bhv_hidden_red_coin_star_loop)
   - [bhv_hidden_star_init](functions-2.md#bhv_hidden_star_init)
   - [bhv_hidden_star_loop](functions-2.md#bhv_hidden_star_loop)
   - [bhv_hidden_star_trigger_loop](functions-2.md#bhv_hidden_star_trigger_loop)
   - [bhv_homing_amp_init](functions-2.md#bhv_homing_amp_init)
   - [bhv_homing_amp_loop](functions-2.md#bhv_homing_amp_loop)
   - [bhv_hoot_init](functions-2.md#bhv_hoot_init)
   - [bhv_hoot_loop](functions-2.md#bhv_hoot_loop)
   - [bhv_horizontal_grindel_init](functions-2.md#bhv_horizontal_grindel_init)
   - [bhv_horizontal_grindel_update](functions-2.md#bhv_horizontal_grindel_update)
   - [bhv_idle_water_wave_loop](functions-2.md#bhv_idle_water_wave_loop)
   - [bhv_init_changing_water_level_loop](functions-2.md#bhv_init_changing_water_level_loop)
   - [bhv_intro_lakitu_loop](functions-2.md#bhv_intro_lakitu_loop)
   - [bhv_intro_peach_loop](functions-2.md#bhv_intro_peach_loop)
   - [bhv_intro_scene_loop](functions-2.md#bhv_intro_scene_loop)
   - [bhv_invisible_objects_under_bridge_init](functions-2.md#bhv_invisible_objects_under_bridge_init)
   - [bhv_invisible_objects_under_bridge_loop](functions-2.md#bhv_invisible_objects_under_bridge_loop)
   - [bhv_jet_stream_loop](functions-2.md#bhv_jet_stream_loop)
   - [bhv_jet_stream_ring_spawner_loop](functions-2.md#bhv_jet_stream_ring_spawner_loop)
   - [bhv_jet_stream_water_ring_init](functions-2.md#bhv_jet_stream_water_ring_init)
   - [bhv_jet_stream_water_ring_loop](functions-2.md#bhv_jet_stream_water_ring_loop)
   - [bhv_jrb_floating_box_loop](functions-2.md#bhv_jrb_floating_box_loop)
   - [bhv_jrb_sliding_box_loop](functions-2.md#bhv_jrb_sliding_box_loop)
   - [bhv_jumping_box_loop](functions-2.md#bhv_jumping_box_loop)
   - [bhv_kickable_board_loop](functions-2.md#bhv_kickable_board_loop)
   - [bhv_king_bobomb_loop](functions-2.md#bhv_king_bobomb_loop)
   - [bhv_klepto_init](functions-2.md#bhv_klepto_init)
   - [bhv_klepto_update](functions-2.md#bhv_klepto_update)
   - [bhv_koopa_init](functions-2.md#bhv_koopa_init)
   - [bhv_koopa_race_endpoint_update](functions-2.md#bhv_koopa_race_endpoint_update)
   - [bhv_koopa_shell_flame_loop](functions-2.md#bhv_koopa_shell_flame_loop)
   - [bhv_koopa_shell_loop](functions-2.md#bhv_koopa_shell_loop)
   - [bhv_koopa_shell_underwater_loop](functions-2.md#bhv_koopa_shell_underwater_loop)
   - [bhv_koopa_update](functions-2.md#bhv_koopa_update)
   - [bhv_large_bomp_init](functions-2.md#bhv_large_bomp_init)
   - [bhv_large_bomp_loop](functions-2.md#bhv_large_bomp_loop)
   - [bhv_lll_bowser_puzzle_loop](functions-2.md#bhv_lll_bowser_puzzle_loop)
   - [bhv_lll_bowser_puzzle_piece_loop](functions-2.md#bhv_lll_bowser_puzzle_piece_loop)
   - [bhv_lll_drawbridge_loop](functions-2.md#bhv_lll_drawbridge_loop)
   - [bhv_lll_drawbridge_spawner_init](functions-2.md#bhv_lll_drawbridge_spawner_init)
   - [bhv_lll_drawbridge_spawner_loop](functions-2.md#bhv_lll_drawbridge_spawner_loop)
   - [bhv_lll_floating_wood_bridge_loop](functions-2.md#bhv_lll_floating_wood_bridge_loop)
   - [bhv_lll_moving_octagonal_mesh_platform_loop](functions-2.md#bhv_lll_moving_octagonal_mesh_platform_loop)
   - [bhv_lll_rolling_log_init](functions-2.md#bhv_lll_rolling_log_init)
   - [bhv_lll_rotating_block_fire_bars_loop](functions-2.md#bhv_lll_rotating_block_fire_bars_loop)
   - [bhv_lll_rotating_hex_flame_loop](functions-2.md#bhv_lll_rotating_hex_flame_loop)
   - [bhv_lll_rotating_hexagonal_ring_loop](functions-2.md#bhv_lll_rotating_hexagonal_ring_loop)
   - [bhv_lll_sinking_rectangular_platform_loop](functions-2.md#bhv_lll_sinking_rectangular_platform_loop)
   - [bhv_lll_sinking_rock_block_loop](functions-2.md#bhv_lll_sinking_rock_block_loop)
   - [bhv_lll_sinking_square_platforms_loop](functions-2.md#bhv_lll_sinking_square_platforms_loop)
   - [bhv_lll_wood_piece_loop](functions-2.md#bhv_lll_wood_piece_loop)
   - [bhv_mad_piano_update](functions-2.md#bhv_mad_piano_update)
   - [bhv_manta_ray_init](functions-2.md#bhv_manta_ray_init)
   - [bhv_manta_ray_loop](functions-2.md#bhv_manta_ray_loop)
   - [bhv_manta_ray_water_ring_init](functions-2.md#bhv_manta_ray_water_ring_init)
   - [bhv_manta_ray_water_ring_loop](functions-2.md#bhv_manta_ray_water_ring_loop)
   - [bhv_menu_button_init](functions-2.md#bhv_menu_button_init)
   - [bhv_menu_button_loop](functions-2.md#bhv_menu_button_loop)
   - [bhv_menu_button_manager_init](functions-2.md#bhv_menu_button_manager_init)
   - [bhv_menu_button_manager_loop](functions-2.md#bhv_menu_button_manager_loop)
   - [bhv_merry_go_round_boo_manager_loop](functions-2.md#bhv_merry_go_round_boo_manager_loop)
   - [bhv_merry_go_round_loop](functions-2.md#bhv_merry_go_round_loop)
   - [bhv_metal_cap_init](functions-2.md#bhv_metal_cap_init)
   - [bhv_metal_cap_loop](functions-2.md#bhv_metal_cap_loop)
   - [bhv_mips_init](functions-2.md#bhv_mips_init)
   - [bhv_mips_loop](functions-2.md#bhv_mips_loop)
   - [bhv_moat_grills_loop](functions-2.md#bhv_moat_grills_loop)
   - [bhv_moneybag_hidden_loop](functions-2.md#bhv_moneybag_hidden_loop)
   - [bhv_moneybag_init](functions-2.md#bhv_moneybag_init)
   - [bhv_moneybag_loop](functions-2.md#bhv_moneybag_loop)
   - [bhv_monty_mole_hole_update](functions-2.md#bhv_monty_mole_hole_update)
   - [bhv_monty_mole_init](functions-2.md#bhv_monty_mole_init)
   - [bhv_monty_mole_rock_update](functions-2.md#bhv_monty_mole_rock_update)
   - [bhv_monty_mole_update](functions-2.md#bhv_monty_mole_update)
   - [bhv_moving_blue_coin_init](functions-2.md#bhv_moving_blue_coin_init)
   - [bhv_moving_blue_coin_loop](functions-2.md#bhv_moving_blue_coin_loop)
   - [bhv_moving_yellow_coin_init](functions-2.md#bhv_moving_yellow_coin_init)
   - [bhv_moving_yellow_coin_loop](functions-2.md#bhv_moving_yellow_coin_loop)
   - [bhv_mr_blizzard_init](functions-2.md#bhv_mr_blizzard_init)
   - [bhv_mr_blizzard_snowball](functions-2.md#bhv_mr_blizzard_snowball)
   - [bhv_mr_blizzard_update](functions-2.md#bhv_mr_blizzard_update)
   - [bhv_mr_i_body_loop](functions-2.md#bhv_mr_i_body_loop)
   - [bhv_mr_i_loop](functions-2.md#bhv_mr_i_loop)
   - [bhv_mr_i_particle_loop](functions-2.md#bhv_mr_i_particle_loop)
   - [bhv_normal_cap_init](functions-2.md#bhv_normal_cap_init)
   - [bhv_normal_cap_loop](functions-2.md#bhv_normal_cap_loop)
   - [bhv_object_bubble_init](functions-2.md#bhv_object_bubble_init)
   - [bhv_object_bubble_loop](functions-2.md#bhv_object_bubble_loop)
   - [bhv_object_water_wave_init](functions-2.md#bhv_object_water_wave_init)
   - [bhv_object_water_wave_loop](functions-2.md#bhv_object_water_wave_loop)
   - [bhv_openable_cage_door_loop](functions-2.md#bhv_openable_cage_door_loop)
   - [bhv_openable_grill_loop](functions-2.md#bhv_openable_grill_loop)
   - [bhv_orange_number_init](functions-2.md#bhv_orange_number_init)
   - [bhv_orange_number_loop](functions-2.md#bhv_orange_number_loop)
   - [bhv_particle_init](functions-2.md#bhv_particle_init)
   - [bhv_particle_loop](functions-2.md#bhv_particle_loop)
   - [bhv_penguin_race_finish_line_update](functions-2.md#bhv_penguin_race_finish_line_update)
   - [bhv_penguin_race_shortcut_check_update](functions-2.md#bhv_penguin_race_shortcut_check_update)
   - [bhv_piranha_particle_loop](functions-2.md#bhv_piranha_particle_loop)
   - [bhv_piranha_plant_bubble_loop](functions-2.md#bhv_piranha_plant_bubble_loop)
   - [bhv_piranha_plant_loop](functions-2.md#bhv_piranha_plant_loop)
   - [bhv_piranha_plant_waking_bubbles_loop](functions-2.md#bhv_piranha_plant_waking_bubbles_loop)
   - [bhv_platform_normals_init](functions-2.md#bhv_platform_normals_init)
   - [bhv_platform_on_track_init](functions-2.md#bhv_platform_on_track_init)
   - [bhv_platform_on_track_update](functions-2.md#bhv_platform_on_track_update)
   - [bhv_play_music_track_when_touched_loop](functions-2.md#bhv_play_music_track_when_touched_loop)
   - [bhv_pokey_body_part_update](functions-2.md#bhv_pokey_body_part_update)
   - [bhv_pokey_update](functions-2.md#bhv_pokey_update)
   - [bhv_pole_base_loop](functions-2.md#bhv_pole_base_loop)
   - [bhv_pole_init](functions-2.md#bhv_pole_init)
   - [bhv_pound_tiny_star_particle_init](functions-2.md#bhv_pound_tiny_star_particle_init)
   - [bhv_pound_tiny_star_particle_loop](functions-2.md#bhv_pound_tiny_star_particle_loop)
   - [bhv_pound_white_puffs_init](functions-2.md#bhv_pound_white_puffs_init)
   - [bhv_punch_tiny_triangle_init](functions-2.md#bhv_punch_tiny_triangle_init)
   - [bhv_punch_tiny_triangle_loop](functions-2.md#bhv_punch_tiny_triangle_loop)
   - [bhv_purple_switch_loop](functions-2.md#bhv_purple_switch_loop)
   - [bhv_pushable_loop](functions-2.md#bhv_pushable_loop)
   - [bhv_pyramid_elevator_init](functions-2.md#bhv_pyramid_elevator_init)
   - [bhv_pyramid_elevator_loop](functions-2.md#bhv_pyramid_elevator_loop)
   - [bhv_pyramid_elevator_trajectory_marker_ball_loop](functions-2.md#bhv_pyramid_elevator_trajectory_marker_ball_loop)
   - [bhv_pyramid_pillar_touch_detector_loop](functions-2.md#bhv_pyramid_pillar_touch_detector_loop)
   - [bhv_pyramid_top_fragment_init](functions-2.md#bhv_pyramid_top_fragment_init)
   - [bhv_pyramid_top_fragment_loop](functions-2.md#bhv_pyramid_top_fragment_loop)
   - [bhv_pyramid_top_init](functions-2.md#bhv_pyramid_top_init)
   - [bhv_pyramid_top_loop](functions-2.md#bhv_pyramid_top_loop)
   - [bhv_racing_penguin_init](functions-2.md#bhv_racing_penguin_init)
   - [bhv_racing_penguin_update](functions-2.md#bhv_racing_penguin_update)
   - [bhv_recovery_heart_loop](functions-2.md#bhv_recovery_heart_loop)
   - [bhv_red_coin_init](functions-2.md#bhv_red_coin_init)
   - [bhv_red_coin_loop](functions-2.md#bhv_red_coin_loop)
   - [bhv_red_coin_star_marker_init](functions-2.md#bhv_red_coin_star_marker_init)
   - [bhv_respawner_loop](functions-2.md#bhv_respawner_loop)
   - [bhv_rolling_log_loop](functions-2.md#bhv_rolling_log_loop)
   - [bhv_rotating_clock_arm_loop](functions-2.md#bhv_rotating_clock_arm_loop)
   - [bhv_rotating_exclamation_box_loop](functions-2.md#bhv_rotating_exclamation_box_loop)
   - [bhv_rotating_octagonal_plat_init](functions-2.md#bhv_rotating_octagonal_plat_init)
   - [bhv_rotating_octagonal_plat_loop](functions-2.md#bhv_rotating_octagonal_plat_loop)
   - [bhv_rotating_platform_loop](functions-2.md#bhv_rotating_platform_loop)
   - [bhv_rr_cruiser_wing_init](functions-2.md#bhv_rr_cruiser_wing_init)
   - [bhv_rr_cruiser_wing_loop](functions-2.md#bhv_rr_cruiser_wing_loop)
   - [bhv_rr_rotating_bridge_platform_loop](functions-2.md#bhv_rr_rotating_bridge_platform_loop)
   - [bhv_sand_sound_loop](functions-2.md#bhv_sand_sound_loop)
   - [bhv_scuttlebug_loop](functions-2.md#bhv_scuttlebug_loop)
   - [bhv_scuttlebug_spawn_loop](functions-2.md#bhv_scuttlebug_spawn_loop)
   - [bhv_seaweed_bundle_init](functions-2.md#bhv_seaweed_bundle_init)
   - [bhv_seaweed_init](functions-2.md#bhv_seaweed_init)
   - [bhv_seesaw_platform_init](functions-2.md#bhv_seesaw_platform_init)
   - [bhv_seesaw_platform_update](functions-2.md#bhv_seesaw_platform_update)
   - [bhv_shallow_water_splash_init](functions-2.md#bhv_shallow_water_splash_init)
   - [bhv_ship_part_3_loop](functions-2.md#bhv_ship_part_3_loop)
   - [bhv_skeeter_update](functions-2.md#bhv_skeeter_update)
   - [bhv_skeeter_wave_update](functions-2.md#bhv_skeeter_wave_update)
   - [bhv_sl_snowman_wind_loop](functions-2.md#bhv_sl_snowman_wind_loop)
   - [bhv_sl_walking_penguin_loop](functions-2.md#bhv_sl_walking_penguin_loop)
   - [bhv_sliding_plat_2_init](functions-2.md#bhv_sliding_plat_2_init)
   - [bhv_sliding_plat_2_loop](functions-2.md#bhv_sliding_plat_2_loop)
   - [bhv_sliding_snow_mound_loop](functions-2.md#bhv_sliding_snow_mound_loop)
   - [bhv_small_bomp_init](functions-2.md#bhv_small_bomp_init)
   - [bhv_small_bomp_loop](functions-2.md#bhv_small_bomp_loop)
   - [bhv_small_bubbles_loop](functions-2.md#bhv_small_bubbles_loop)
   - [bhv_small_bully_init](functions-2.md#bhv_small_bully_init)
   - [bhv_small_penguin_loop](functions-2.md#bhv_small_penguin_loop)
   - [bhv_small_piranha_flame_loop](functions-2.md#bhv_small_piranha_flame_loop)
   - [bhv_small_water_wave_loop](functions-2.md#bhv_small_water_wave_loop)
   - [bhv_snow_leaf_particle_spawn_init](functions-2.md#bhv_snow_leaf_particle_spawn_init)
   - [bhv_snow_mound_spawn_loop](functions-2.md#bhv_snow_mound_spawn_loop)
   - [bhv_snowmans_body_checkpoint_loop](functions-2.md#bhv_snowmans_body_checkpoint_loop)
   - [bhv_snowmans_bottom_init](functions-2.md#bhv_snowmans_bottom_init)
   - [bhv_snowmans_bottom_loop](functions-2.md#bhv_snowmans_bottom_loop)
   - [bhv_snowmans_head_init](functions-2.md#bhv_snowmans_head_init)
   - [bhv_snowmans_head_loop](functions-2.md#bhv_snowmans_head_loop)
   - [bhv_snufit_balls_loop](functions-2.md#bhv_snufit_balls_loop)
   - [bhv_snufit_loop](functions-2.md#bhv_snufit_loop)
   - [bhv_sound_spawner_init](functions-2.md#bhv_sound_spawner_init)
   - [bhv_sparkle_spawn_loop](functions-2.md#bhv_sparkle_spawn_loop)
   - [bhv_spawn_star_no_level_exit](functions-2.md#bhv_spawn_star_no_level_exit)
   - [bhv_spawned_star_init](functions-2.md#bhv_spawned_star_init)
   - [bhv_spawned_star_loop](functions-2.md#bhv_spawned_star_loop)
   - [bhv_spindel_init](functions-2.md#bhv_spindel_init)
   - [bhv_spindel_loop](functions-2.md#bhv_spindel_loop)
   - [bhv_spindrift_loop](functions-2.md#bhv_spindrift_loop)
   - [bhv_spiny_update](functions-2.md#bhv_spiny_update)
   - [bhv_squarish_path_moving_loop](functions-2.md#bhv_squarish_path_moving_loop)
   - [bhv_squarish_path_parent_init](functions-2.md#bhv_squarish_path_parent_init)
   - [bhv_squarish_path_parent_loop](functions-2.md#bhv_squarish_path_parent_loop)
   - [bhv_squishable_platform_loop](functions-2.md#bhv_squishable_platform_loop)
   - [bhv_ssl_moving_pyramid_wall_init](functions-2.md#bhv_ssl_moving_pyramid_wall_init)
   - [bhv_ssl_moving_pyramid_wall_loop](functions-2.md#bhv_ssl_moving_pyramid_wall_loop)
   - [bhv_star_door_loop](functions-2.md#bhv_star_door_loop)
   - [bhv_star_door_loop_2](functions-2.md#bhv_star_door_loop_2)
   - [bhv_star_key_collection_puff_spawner_loop](functions-2.md#bhv_star_key_collection_puff_spawner_loop)
   - [bhv_star_spawn_init](functions-2.md#bhv_star_spawn_init)
   - [bhv_star_spawn_loop](functions-2.md#bhv_star_spawn_loop)
   - [bhv_static_checkered_platform_loop](functions-2.md#bhv_static_checkered_platform_loop)
   - [bhv_strong_wind_particle_loop](functions-2.md#bhv_strong_wind_particle_loop)
   - [bhv_sunken_ship_part_loop](functions-2.md#bhv_sunken_ship_part_loop)
   - [bhv_sushi_shark_collision_loop](functions-2.md#bhv_sushi_shark_collision_loop)
   - [bhv_sushi_shark_loop](functions-2.md#bhv_sushi_shark_loop)
   - [bhv_swing_platform_init](functions-2.md#bhv_swing_platform_init)
   - [bhv_swing_platform_update](functions-2.md#bhv_swing_platform_update)
   - [bhv_swoop_update](functions-2.md#bhv_swoop_update)
   - [bhv_tank_fish_group_loop](functions-2.md#bhv_tank_fish_group_loop)
   - [bhv_temp_coin_loop](functions-2.md#bhv_temp_coin_loop)
   - [bhv_thi_bowling_ball_spawner_loop](functions-2.md#bhv_thi_bowling_ball_spawner_loop)
   - [bhv_thi_huge_island_top_loop](functions-2.md#bhv_thi_huge_island_top_loop)
   - [bhv_thi_tiny_island_top_loop](functions-2.md#bhv_thi_tiny_island_top_loop)
   - [bhv_tilting_bowser_lava_platform_init](functions-2.md#bhv_tilting_bowser_lava_platform_init)
   - [bhv_tilting_inverted_pyramid_loop](functions-2.md#bhv_tilting_inverted_pyramid_loop)
   - [bhv_tiny_star_particles_init](functions-2.md#bhv_tiny_star_particles_init)
   - [bhv_tower_door_loop](functions-2.md#bhv_tower_door_loop)
   - [bhv_tower_platform_group_init](functions-2.md#bhv_tower_platform_group_init)
   - [bhv_tower_platform_group_loop](functions-2.md#bhv_tower_platform_group_loop)
   - [bhv_tox_box_loop](functions-2.md#bhv_tox_box_loop)
   - [bhv_track_ball_update](functions-2.md#bhv_track_ball_update)
   - [bhv_treasure_chest_bottom_init](functions-2.md#bhv_treasure_chest_bottom_init)
   - [bhv_treasure_chest_bottom_loop](functions-2.md#bhv_treasure_chest_bottom_loop)
   - [bhv_treasure_chest_init](functions-2.md#bhv_treasure_chest_init)
   - [bhv_treasure_chest_jrb_init](functions-2.md#bhv_treasure_chest_jrb_init)
   - [bhv_treasure_chest_jrb_loop](functions-2.md#bhv_treasure_chest_jrb_loop)
   - [bhv_treasure_chest_loop](functions-2.md#bhv_treasure_chest_loop)
   - [bhv_treasure_chest_ship_init](functions-2.md#bhv_treasure_chest_ship_init)
   - [bhv_treasure_chest_ship_loop](functions-2.md#bhv_treasure_chest_ship_loop)
   - [bhv_treasure_chest_top_loop](functions-2.md#bhv_treasure_chest_top_loop)
   - [bhv_tree_snow_or_leaf_loop](functions-2.md#bhv_tree_snow_or_leaf_loop)
   - [bhv_triplet_butterfly_update](functions-2.md#bhv_triplet_butterfly_update)
   - [bhv_ttc_2d_rotator_init](functions-2.md#bhv_ttc_2d_rotator_init)
   - [bhv_ttc_2d_rotator_update](functions-2.md#bhv_ttc_2d_rotator_update)
   - [bhv_ttc_cog_init](functions-2.md#bhv_ttc_cog_init)
   - [bhv_ttc_cog_update](functions-2.md#bhv_ttc_cog_update)
   - [bhv_ttc_elevator_init](functions-2.md#bhv_ttc_elevator_init)
   - [bhv_ttc_elevator_update](functions-2.md#bhv_ttc_elevator_update)
   - [bhv_ttc_moving_bar_init](functions-2.md#bhv_ttc_moving_bar_init)
   - [bhv_ttc_moving_bar_update](functions-2.md#bhv_ttc_moving_bar_update)
   - [bhv_ttc_pendulum_init](functions-2.md#bhv_ttc_pendulum_init)
   - [bhv_ttc_pendulum_update](functions-2.md#bhv_ttc_pendulum_update)
   - [bhv_ttc_pit_block_init](functions-2.md#bhv_ttc_pit_block_init)
   - [bhv_ttc_pit_block_update](functions-2.md#bhv_ttc_pit_block_update)
   - [bhv_ttc_rotating_solid_init](functions-2.md#bhv_ttc_rotating_solid_init)
   - [bhv_ttc_rotating_solid_update](functions-2.md#bhv_ttc_rotating_solid_update)
   - [bhv_ttc_spinner_update](functions-2.md#bhv_ttc_spinner_update)
   - [bhv_ttc_treadmill_init](functions-2.md#bhv_ttc_treadmill_init)
   - [bhv_ttc_treadmill_update](functions-2.md#bhv_ttc_treadmill_update)
   - [bhv_ttm_rolling_log_init](functions-2.md#bhv_ttm_rolling_log_init)
   - [bhv_tumbling_bridge_loop](functions-2.md#bhv_tumbling_bridge_loop)
   - [bhv_tumbling_bridge_platform_loop](functions-2.md#bhv_tumbling_bridge_platform_loop)
   - [bhv_tuxies_mother_loop](functions-2.md#bhv_tuxies_mother_loop)
   - [bhv_tweester_loop](functions-2.md#bhv_tweester_loop)
   - [bhv_tweester_sand_particle_loop](functions-2.md#bhv_tweester_sand_particle_loop)
   - [bhv_ukiki_cage_loop](functions-2.md#bhv_ukiki_cage_loop)
   - [bhv_ukiki_cage_star_loop](functions-2.md#bhv_ukiki_cage_star_loop)
   - [bhv_ukiki_init](functions-2.md#bhv_ukiki_init)
   - [bhv_ukiki_loop](functions-2.md#bhv_ukiki_loop)
   - [bhv_unagi_init](functions-2.md#bhv_unagi_init)
   - [bhv_unagi_loop](functions-2.md#bhv_unagi_loop)
   - [bhv_unagi_subobject_loop](functions-2.md#bhv_unagi_subobject_loop)
   - [bhv_unused_particle_spawn_loop](functions-2.md#bhv_unused_particle_spawn_loop)
   - [bhv_unused_poundable_platform](functions-2.md#bhv_unused_poundable_platform)
   - [bhv_vanish_cap_init](functions-2.md#bhv_vanish_cap_init)
   - [bhv_volcano_flames_loop](functions-2.md#bhv_volcano_flames_loop)
   - [bhv_volcano_sound_loop](functions-2.md#bhv_volcano_sound_loop)
   - [bhv_volcano_trap_loop](functions-2.md#bhv_volcano_trap_loop)
   - [bhv_wall_tiny_star_particle_loop](functions-2.md#bhv_wall_tiny_star_particle_loop)
   - [bhv_warp_loop](functions-2.md#bhv_warp_loop)
   - [bhv_water_air_bubble_init](functions-2.md#bhv_water_air_bubble_init)
   - [bhv_water_air_bubble_loop](functions-2.md#bhv_water_air_bubble_loop)
   - [bhv_water_bomb_cannon_loop](functions-2.md#bhv_water_bomb_cannon_loop)
   - [bhv_water_bomb_shadow_update](functions-2.md#bhv_water_bomb_shadow_update)
   - [bhv_water_bomb_spawner_update](functions-2.md#bhv_water_bomb_spawner_update)
   - [bhv_water_bomb_update](functions-2.md#bhv_water_bomb_update)
   - [bhv_water_droplet_loop](functions-2.md#bhv_water_droplet_loop)
   - [bhv_water_droplet_splash_init](functions-2.md#bhv_water_droplet_splash_init)
   - [bhv_water_level_diamond_loop](functions-2.md#bhv_water_level_diamond_loop)
   - [bhv_water_level_pillar_init](functions-2.md#bhv_water_level_pillar_init)
   - [bhv_water_level_pillar_loop](functions-2.md#bhv_water_level_pillar_loop)
   - [bhv_water_mist_2_loop](functions-2.md#bhv_water_mist_2_loop)
   - [bhv_water_mist_loop](functions-2.md#bhv_water_mist_loop)
   - [bhv_water_mist_spawn_loop](functions-2.md#bhv_water_mist_spawn_loop)
   - [bhv_water_splash_spawn_droplets](functions-2.md#bhv_water_splash_spawn_droplets)
   - [bhv_water_waves_init](functions-2.md#bhv_water_waves_init)
   - [bhv_waterfall_sound_loop](functions-2.md#bhv_waterfall_sound_loop)
   - [bhv_wave_trail_shrink](functions-2.md#bhv_wave_trail_shrink)
   - [bhv_wdw_express_elevator_loop](functions-2.md#bhv_wdw_express_elevator_loop)
   - [bhv_wf_breakable_wall_loop](functions-2.md#bhv_wf_breakable_wall_loop)
   - [bhv_wf_elevator_tower_platform_loop](functions-2.md#bhv_wf_elevator_tower_platform_loop)
   - [bhv_wf_rotating_wooden_platform_init](functions-2.md#bhv_wf_rotating_wooden_platform_init)
   - [bhv_wf_rotating_wooden_platform_loop](functions-2.md#bhv_wf_rotating_wooden_platform_loop)
   - [bhv_wf_sliding_platform_init](functions-2.md#bhv_wf_sliding_platform_init)
   - [bhv_wf_sliding_platform_loop](functions-2.md#bhv_wf_sliding_platform_loop)
   - [bhv_wf_sliding_tower_platform_loop](functions-2.md#bhv_wf_sliding_tower_platform_loop)
   - [bhv_wf_solid_tower_platform_loop](functions-2.md#bhv_wf_solid_tower_platform_loop)
   - [bhv_whirlpool_init](functions-2.md#bhv_whirlpool_init)
   - [bhv_whirlpool_loop](functions-2.md#bhv_whirlpool_loop)
   - [bhv_white_puff_1_loop](functions-2.md#bhv_white_puff_1_loop)
   - [bhv_white_puff_2_loop](functions-2.md#bhv_white_puff_2_loop)
   - [bhv_white_puff_exploding_loop](functions-2.md#bhv_white_puff_exploding_loop)
   - [bhv_white_puff_smoke_init](functions-2.md#bhv_white_puff_smoke_init)
   - [bhv_whomp_loop](functions-2.md#bhv_whomp_loop)
   - [bhv_wiggler_body_part_update](functions-2.md#bhv_wiggler_body_part_update)
   - [bhv_wiggler_update](functions-2.md#bhv_wiggler_update)
   - [bhv_wind_loop](functions-2.md#bhv_wind_loop)
   - [bhv_wing_cap_init](functions-2.md#bhv_wing_cap_init)
   - [bhv_wing_vanish_cap_loop](functions-2.md#bhv_wing_vanish_cap_loop)
   - [bhv_wooden_post_update](functions-2.md#bhv_wooden_post_update)
   - [bhv_yellow_coin_init](functions-2.md#bhv_yellow_coin_init)
   - [bhv_yellow_coin_loop](functions-2.md#bhv_yellow_coin_loop)
   - [bhv_yoshi_init](functions-2.md#bhv_yoshi_init)
   - [bhv_yoshi_loop](functions-2.md#bhv_yoshi_loop)
   - [check_if_moving_over_floor](functions-2.md#check_if_moving_over_floor)
   - [clear_particle_flags](functions-2.md#clear_particle_flags)
   - [common_anchor_mario_behavior](functions-2.md#common_anchor_mario_behavior)
   - [cur_obj_spawn_strong_wind_particles](functions-2.md#cur_obj_spawn_strong_wind_particles)
   - [mario_moving_fast_enough_to_make_piranha_plant_bite](functions-2.md#mario_moving_fast_enough_to_make_piranha_plant_bite)
   - [obj_set_secondary_camera_focus](functions-2.md#obj_set_secondary_camera_focus)
   - [play_penguin_walking_sound](functions-2.md#play_penguin_walking_sound)
   - [spawn_default_star](functions-2.md#spawn_default_star)
   - [spawn_mist_from_global](functions-2.md#spawn_mist_from_global)
   - [spawn_mist_particles_variable](functions-2.md#spawn_mist_particles_variable)
   - [spawn_no_exit_star](functions-2.md#spawn_no_exit_star)
   - [spawn_red_coin_cutscene_star](functions-2.md#spawn_red_coin_cutscene_star)
   - [spawn_triangle_break_particles](functions-2.md#spawn_triangle_break_particles)
   - [spawn_wind_particles](functions-2.md#spawn_wind_particles)
   - [tox_box_move](functions-2.md#tox_box_move)
   - [update_angle_from_move_flags](functions-2.md#update_angle_from_move_flags)
   - [vec3f_copy_2](functions-2.md#vec3f_copy_2)

<br />

- behavior_table.h
   - [get_behavior_from_id](functions-2.md#get_behavior_from_id)
   - [get_behavior_name_from_id](functions-2.md#get_behavior_name_from_id)
   - [get_id_from_behavior](functions-2.md#get_id_from_behavior)
   - [get_id_from_behavior_name](functions-2.md#get_id_from_behavior_name)
   - [get_id_from_vanilla_behavior](functions-2.md#get_id_from_vanilla_behavior)

<br />

- camera.h
   - [approach_camera_height](functions-3.md#approach_camera_height)
   - [approach_f32_asymptotic](functions-3.md#approach_f32_asymptotic)
   - [approach_f32_asymptotic_bool](functions-3.md#approach_f32_asymptotic_bool)
   - [approach_s16_asymptotic](functions-3.md#approach_s16_asymptotic)
   - [approach_s16_asymptotic_bool](functions-3.md#approach_s16_asymptotic_bool)
   - [approach_vec3f_asymptotic](functions-3.md#approach_vec3f_asymptotic)
   - [calc_abs_dist](functions-3.md#calc_abs_dist)
   - [calc_hor_dist](functions-3.md#calc_hor_dist)
   - [calculate_angles](functions-3.md#calculate_angles)
   - [calculate_pitch](functions-3.md#calculate_pitch)
   - [calculate_yaw](functions-3.md#calculate_yaw)
   - [cam_select_alt_mode](functions-3.md#cam_select_alt_mode)
   - [camera_approach_f32_symmetric](functions-3.md#camera_approach_f32_symmetric)
   - [camera_approach_f32_symmetric_bool](functions-3.md#camera_approach_f32_symmetric_bool)
   - [camera_approach_s16_symmetric_bool](functions-3.md#camera_approach_s16_symmetric_bool)
   - [camera_course_processing](functions-3.md#camera_course_processing)
   - [camera_set_use_course_specific_settings](functions-3.md#camera_set_use_course_specific_settings)
   - [clamp_pitch](functions-3.md#clamp_pitch)
   - [clamp_positions_and_find_yaw](functions-3.md#clamp_positions_and_find_yaw)
   - [collide_with_walls](functions-3.md#collide_with_walls)
   - [cutscene_object](functions-3.md#cutscene_object)
   - [cutscene_object_with_dialog](functions-3.md#cutscene_object_with_dialog)
   - [cutscene_object_without_dialog](functions-3.md#cutscene_object_without_dialog)
   - [cutscene_set_fov_shake_preset](functions-3.md#cutscene_set_fov_shake_preset)
   - [cutscene_spawn_obj](functions-3.md#cutscene_spawn_obj)
   - [find_c_buttons_pressed](functions-3.md#find_c_buttons_pressed)
   - [find_mario_floor_and_ceil](functions-3.md#find_mario_floor_and_ceil)
   - [get_cutscene_from_mario_status](functions-3.md#get_cutscene_from_mario_status)
   - [handle_c_button_movement](functions-3.md#handle_c_button_movement)
   - [is_range_behind_surface](functions-3.md#is_range_behind_surface)
   - [is_within_100_units_of_mario](functions-3.md#is_within_100_units_of_mario)
   - [move_mario_head_c_up](functions-3.md#move_mario_head_c_up)
   - [next_lakitu_state](functions-3.md#next_lakitu_state)
   - [obj_rotate_towards_point](functions-3.md#obj_rotate_towards_point)
   - [object_pos_to_vec3f](functions-3.md#object_pos_to_vec3f)
   - [offset_rotated](functions-3.md#offset_rotated)
   - [offset_yaw_outward_radial](functions-3.md#offset_yaw_outward_radial)
   - [play_camera_buzz_if_c_sideways](functions-3.md#play_camera_buzz_if_c_sideways)
   - [play_camera_buzz_if_cbutton](functions-3.md#play_camera_buzz_if_cbutton)
   - [play_camera_buzz_if_cdown](functions-3.md#play_camera_buzz_if_cdown)
   - [play_cutscene](functions-3.md#play_cutscene)
   - [play_sound_button_change_blocked](functions-3.md#play_sound_button_change_blocked)
   - [play_sound_cbutton_down](functions-3.md#play_sound_cbutton_down)
   - [play_sound_cbutton_side](functions-3.md#play_sound_cbutton_side)
   - [play_sound_cbutton_up](functions-3.md#play_sound_cbutton_up)
   - [play_sound_if_cam_switched_to_lakitu_or_mario](functions-3.md#play_sound_if_cam_switched_to_lakitu_or_mario)
   - [play_sound_rbutton_changed](functions-3.md#play_sound_rbutton_changed)
   - [radial_camera_input](functions-3.md#radial_camera_input)
   - [random_vec3s](functions-3.md#random_vec3s)
   - [reset_camera](functions-3.md#reset_camera)
   - [resolve_geometry_collisions](functions-3.md#resolve_geometry_collisions)
   - [rotate_camera_around_walls](functions-3.md#rotate_camera_around_walls)
   - [rotate_in_xz](functions-3.md#rotate_in_xz)
   - [rotate_in_yz](functions-3.md#rotate_in_yz)
   - [scale_along_line](functions-3.md#scale_along_line)
   - [select_mario_cam_mode](functions-3.md#select_mario_cam_mode)
   - [set_cam_angle](functions-3.md#set_cam_angle)
   - [set_camera_mode](functions-3.md#set_camera_mode)
   - [set_camera_mode_fixed](functions-3.md#set_camera_mode_fixed)
   - [set_camera_pitch_shake](functions-3.md#set_camera_pitch_shake)
   - [set_camera_roll_shake](functions-3.md#set_camera_roll_shake)
   - [set_camera_shake_from_hit](functions-3.md#set_camera_shake_from_hit)
   - [set_camera_shake_from_point](functions-3.md#set_camera_shake_from_point)
   - [set_camera_yaw_shake](functions-3.md#set_camera_yaw_shake)
   - [set_environmental_camera_shake](functions-3.md#set_environmental_camera_shake)
   - [set_fixed_cam_axis_sa_lobby](functions-3.md#set_fixed_cam_axis_sa_lobby)
   - [set_fov_function](functions-3.md#set_fov_function)
   - [set_fov_shake](functions-3.md#set_fov_shake)
   - [set_fov_shake_from_point_preset](functions-3.md#set_fov_shake_from_point_preset)
   - [set_handheld_shake](functions-3.md#set_handheld_shake)
   - [set_or_approach_f32_asymptotic](functions-3.md#set_or_approach_f32_asymptotic)
   - [set_or_approach_s16_symmetric](functions-3.md#set_or_approach_s16_symmetric)
   - [set_or_approach_vec3f_asymptotic](functions-3.md#set_or_approach_vec3f_asymptotic)
   - [set_pitch_shake_from_point](functions-3.md#set_pitch_shake_from_point)
   - [shake_camera_handheld](functions-3.md#shake_camera_handheld)
   - [shake_camera_pitch](functions-3.md#shake_camera_pitch)
   - [shake_camera_roll](functions-3.md#shake_camera_roll)
   - [shake_camera_yaw](functions-3.md#shake_camera_yaw)
   - [soft_reset_camera](functions-3.md#soft_reset_camera)
   - [start_cutscene](functions-3.md#start_cutscene)
   - [start_object_cutscene_without_focus](functions-3.md#start_object_cutscene_without_focus)
   - [transition_next_state](functions-3.md#transition_next_state)
   - [trigger_cutscene_dialog](functions-3.md#trigger_cutscene_dialog)
   - [vec3f_sub](functions-3.md#vec3f_sub)
   - [vec3f_to_object_pos](functions-3.md#vec3f_to_object_pos)
   - [warp_camera](functions-3.md#warp_camera)

<br />

- characters.h
   - [get_character](functions-3.md#get_character)
   - [get_character_anim_offset](functions-3.md#get_character_anim_offset)
   - [play_character_sound](functions-3.md#play_character_sound)
   - [play_character_sound_if_no_flag](functions-3.md#play_character_sound_if_no_flag)
   - [play_character_sound_offset](functions-3.md#play_character_sound_offset)
   - [update_character_anim_offset](functions-3.md#update_character_anim_offset)

<br />

- djui_chat_message.h
   - [djui_chat_message_create](functions-3.md#djui_chat_message_create)

<br />

- djui_hud_utils.h
   - [djui_hud_get_mouse_x](functions-3.md#djui_hud_get_mouse_x)
   - [djui_hud_get_mouse_y](functions-3.md#djui_hud_get_mouse_y)
   - [djui_hud_get_raw_mouse_x](functions-3.md#djui_hud_get_raw_mouse_x)
   - [djui_hud_get_raw_mouse_y](functions-3.md#djui_hud_get_raw_mouse_y)
   - [djui_hud_get_screen_height](functions-3.md#djui_hud_get_screen_height)
   - [djui_hud_get_screen_width](functions-3.md#djui_hud_get_screen_width)
   - [djui_hud_measure_text](functions-3.md#djui_hud_measure_text)
   - [djui_hud_print_text](functions-3.md#djui_hud_print_text)
   - [djui_hud_render_rect](functions-3.md#djui_hud_render_rect)
   - [djui_hud_render_rect_interpolated](functions-3.md#djui_hud_render_rect_interpolated)
   - [djui_hud_set_color](functions-3.md#djui_hud_set_color)
   - [djui_hud_set_font](functions-3.md#djui_hud_set_font)
   - [djui_hud_set_mouse_locked](functions-3.md#djui_hud_set_mouse_locked)
   - [djui_hud_set_resolution](functions-3.md#djui_hud_set_resolution)
   - [djui_hud_world_pos_to_screen_pos](functions-3.md#djui_hud_world_pos_to_screen_pos)

<br />

- djui_popup.h
   - [djui_popup_create](functions-3.md#djui_popup_create)

<br />

- external.h
   - [fade_volume_scale](functions-3.md#fade_volume_scale)
   - [fadeout_background_music](functions-3.md#fadeout_background_music)
   - [get_current_background_music](functions-3.md#get_current_background_music)
   - [get_current_background_music_default_volume](functions-3.md#get_current_background_music_default_volume)
   - [get_current_background_music_max_target_volume](functions-3.md#get_current_background_music_max_target_volume)
   - [get_current_background_music_target_volume](functions-3.md#get_current_background_music_target_volume)
   - [is_current_background_music_volume_lowered](functions-3.md#is_current_background_music_volume_lowered)
   - [play_course_clear](functions-3.md#play_course_clear)
   - [play_dialog_sound](functions-3.md#play_dialog_sound)
   - [play_music](functions-3.md#play_music)
   - [play_peachs_jingle](functions-3.md#play_peachs_jingle)
   - [play_power_star_jingle](functions-3.md#play_power_star_jingle)
   - [play_puzzle_jingle](functions-3.md#play_puzzle_jingle)
   - [play_race_fanfare](functions-3.md#play_race_fanfare)
   - [play_secondary_music](functions-3.md#play_secondary_music)
   - [play_sound](functions-3.md#play_sound)
   - [play_sound_with_freq_scale](functions-3.md#play_sound_with_freq_scale)
   - [play_star_fanfare](functions-3.md#play_star_fanfare)
   - [play_toads_jingle](functions-3.md#play_toads_jingle)
   - [seq_player_fade_out](functions-3.md#seq_player_fade_out)
   - [seq_player_lower_volume](functions-3.md#seq_player_lower_volume)
   - [seq_player_unlower_volume](functions-3.md#seq_player_unlower_volume)

<br />

- interaction.h
   - [does_mario_have_normal_cap_on_head](functions-3.md#does_mario_have_normal_cap_on_head)
   - [get_door_save_file_flag](functions-3.md#get_door_save_file_flag)
   - [interact_damage](functions-3.md#interact_damage)
   - [mario_blow_off_cap](functions-3.md#mario_blow_off_cap)
   - [mario_check_object_grab](functions-3.md#mario_check_object_grab)
   - [mario_drop_held_object](functions-3.md#mario_drop_held_object)
   - [mario_get_collided_object](functions-3.md#mario_get_collided_object)
   - [mario_grab_used_object](functions-3.md#mario_grab_used_object)
   - [mario_lose_cap_to_enemy](functions-3.md#mario_lose_cap_to_enemy)
   - [mario_obj_angle_to_object](functions-3.md#mario_obj_angle_to_object)
   - [mario_retrieve_cap](functions-3.md#mario_retrieve_cap)
   - [mario_stop_riding_and_holding](functions-3.md#mario_stop_riding_and_holding)
   - [mario_stop_riding_object](functions-3.md#mario_stop_riding_object)
   - [mario_throw_held_object](functions-3.md#mario_throw_held_object)
   - [passes_pvp_interaction_checks](functions-3.md#passes_pvp_interaction_checks)
   - [take_damage_and_knock_back](functions-3.md#take_damage_and_knock_back)

<br />

- level_info.h
   - [get_level_name](functions-3.md#get_level_name)
   - [get_level_name_ascii](functions-3.md#get_level_name_ascii)
   - [get_level_name_sm64](functions-3.md#get_level_name_sm64)
   - [get_star_name](functions-3.md#get_star_name)
   - [get_star_name_ascii](functions-3.md#get_star_name_ascii)
   - [get_star_name_sm64](functions-3.md#get_star_name_sm64)

<br />

- mario.h
   - [adjust_sound_for_speed](functions-3.md#adjust_sound_for_speed)
   - [check_common_action_exits](functions-3.md#check_common_action_exits)
   - [check_common_hold_action_exits](functions-3.md#check_common_hold_action_exits)
   - [drop_and_set_mario_action](functions-3.md#drop_and_set_mario_action)
   - [execute_mario_action](functions-3.md#execute_mario_action)
   - [find_floor_height_relative_polar](functions-3.md#find_floor_height_relative_polar)
   - [find_floor_slope](functions-3.md#find_floor_slope)
   - [find_mario_anim_flags_and_translation](functions-3.md#find_mario_anim_flags_and_translation)
   - [force_idle_state](functions-3.md#force_idle_state)
   - [hurt_and_set_mario_action](functions-3.md#hurt_and_set_mario_action)
   - [init_single_mario](functions-3.md#init_single_mario)
   - [is_anim_at_end](functions-3.md#is_anim_at_end)
   - [is_anim_past_end](functions-3.md#is_anim_past_end)
   - [is_anim_past_frame](functions-3.md#is_anim_past_frame)
   - [mario_can_bubble](functions-3.md#mario_can_bubble)
   - [mario_facing_downhill](functions-3.md#mario_facing_downhill)
   - [mario_floor_is_slippery](functions-3.md#mario_floor_is_slippery)
   - [mario_floor_is_slope](functions-3.md#mario_floor_is_slope)
   - [mario_floor_is_steep](functions-3.md#mario_floor_is_steep)
   - [mario_get_floor_class](functions-3.md#mario_get_floor_class)
   - [mario_get_terrain_sound_addend](functions-3.md#mario_get_terrain_sound_addend)
   - [mario_set_bubbled](functions-3.md#mario_set_bubbled)
   - [mario_set_forward_vel](functions-3.md#mario_set_forward_vel)
   - [mario_update_wall](functions-3.md#mario_update_wall)
   - [play_mario_action_sound](functions-3.md#play_mario_action_sound)
   - [play_mario_heavy_landing_sound](functions-3.md#play_mario_heavy_landing_sound)
   - [play_mario_heavy_landing_sound_once](functions-3.md#play_mario_heavy_landing_sound_once)
   - [play_mario_jump_sound](functions-3.md#play_mario_jump_sound)
   - [play_mario_landing_sound](functions-3.md#play_mario_landing_sound)
   - [play_mario_landing_sound_once](functions-3.md#play_mario_landing_sound_once)
   - [play_mario_sound](functions-3.md#play_mario_sound)
   - [play_sound_and_spawn_particles](functions-3.md#play_sound_and_spawn_particles)
   - [play_sound_if_no_flag](functions-3.md#play_sound_if_no_flag)
   - [resolve_and_return_wall_collisions](functions-3.md#resolve_and_return_wall_collisions)
   - [return_mario_anim_y_translation](functions-3.md#return_mario_anim_y_translation)
   - [set_anim_to_frame](functions-3.md#set_anim_to_frame)
   - [set_jump_from_landing](functions-3.md#set_jump_from_landing)
   - [set_jumping_action](functions-3.md#set_jumping_action)
   - [set_mario_action](functions-3.md#set_mario_action)
   - [set_mario_anim_with_accel](functions-3.md#set_mario_anim_with_accel)
   - [set_mario_animation](functions-3.md#set_mario_animation)
   - [set_mario_particle_flags](functions-3.md#set_mario_particle_flags)
   - [set_mario_y_vel_based_on_fspeed](functions-3.md#set_mario_y_vel_based_on_fspeed)
   - [set_steep_jump_action](functions-3.md#set_steep_jump_action)
   - [set_water_plunge_action](functions-3.md#set_water_plunge_action)
   - [transition_submerged_to_walking](functions-3.md#transition_submerged_to_walking)
   - [update_mario_pos_for_anim](functions-3.md#update_mario_pos_for_anim)
   - [update_mario_sound_and_camera](functions-3.md#update_mario_sound_and_camera)

<br />

- mario_actions_airborne.c
   - [check_common_airborne_cancels](functions-3.md#check_common_airborne_cancels)
   - [check_fall_damage](functions-3.md#check_fall_damage)
   - [check_fall_damage_or_get_stuck](functions-3.md#check_fall_damage_or_get_stuck)
   - [check_horizontal_wind](functions-3.md#check_horizontal_wind)
   - [check_kick_or_dive_in_air](functions-3.md#check_kick_or_dive_in_air)
   - [check_wall_kick](functions-3.md#check_wall_kick)
   - [common_air_action_step](functions-3.md#common_air_action_step)
   - [common_air_knockback_step](functions-3.md#common_air_knockback_step)
   - [lava_boost_on_wall](functions-3.md#lava_boost_on_wall)
   - [mario_execute_airborne_action](functions-3.md#mario_execute_airborne_action)
   - [play_far_fall_sound](functions-3.md#play_far_fall_sound)
   - [play_flip_sounds](functions-3.md#play_flip_sounds)
   - [play_knockback_sound](functions-3.md#play_knockback_sound)
   - [should_get_stuck_in_ground](functions-3.md#should_get_stuck_in_ground)
   - [update_air_with_turn](functions-3.md#update_air_with_turn)
   - [update_air_without_turn](functions-3.md#update_air_without_turn)
   - [update_flying](functions-3.md#update_flying)
   - [update_flying_pitch](functions-3.md#update_flying_pitch)
   - [update_flying_yaw](functions-3.md#update_flying_yaw)
   - [update_lava_boost_or_twirling](functions-3.md#update_lava_boost_or_twirling)

<br />

- mario_actions_automatic.c
   - [add_tree_leaf_particles](functions-3.md#add_tree_leaf_particles)
   - [check_common_automatic_cancels](functions-3.md#check_common_automatic_cancels)
   - [climb_up_ledge](functions-3.md#climb_up_ledge)
   - [let_go_of_ledge](functions-3.md#let_go_of_ledge)
   - [mario_execute_automatic_action](functions-3.md#mario_execute_automatic_action)
   - [perform_hanging_step](functions-3.md#perform_hanging_step)
   - [play_climbing_sounds](functions-3.md#play_climbing_sounds)
   - [set_pole_position](functions-3.md#set_pole_position)
   - [update_hang_moving](functions-3.md#update_hang_moving)
   - [update_hang_stationary](functions-3.md#update_hang_stationary)
   - [update_ledge_climb](functions-3.md#update_ledge_climb)
   - [update_ledge_climb_camera](functions-3.md#update_ledge_climb_camera)

<br />

- mario_actions_cutscene.c
   - [bhv_end_peach_loop](functions-3.md#bhv_end_peach_loop)
   - [bhv_end_toad_loop](functions-3.md#bhv_end_toad_loop)
   - [common_death_handler](functions-3.md#common_death_handler)
   - [cutscene_put_cap_on](functions-3.md#cutscene_put_cap_on)
   - [cutscene_take_cap_off](functions-3.md#cutscene_take_cap_off)
   - [general_star_dance_handler](functions-3.md#general_star_dance_handler)
   - [generate_yellow_sparkles](functions-3.md#generate_yellow_sparkles)
   - [get_star_collection_dialog](functions-3.md#get_star_collection_dialog)
   - [handle_save_menu](functions-3.md#handle_save_menu)
   - [launch_mario_until_land](functions-3.md#launch_mario_until_land)
   - [mario_execute_cutscene_action](functions-3.md#mario_execute_cutscene_action)
   - [mario_ready_to_speak](functions-3.md#mario_ready_to_speak)
   - [print_displaying_credits_entry](functions-3.md#print_displaying_credits_entry)
   - [should_start_or_continue_dialog](functions-3.md#should_start_or_continue_dialog)
   - [stuck_in_ground_handler](functions-3.md#stuck_in_ground_handler)

<br />

- mario_actions_moving.c
   - [align_with_floor](functions-3.md#align_with_floor)
   - [analog_stick_held_back](functions-3.md#analog_stick_held_back)
   - [anim_and_audio_for_heavy_walk](functions-3.md#anim_and_audio_for_heavy_walk)
   - [anim_and_audio_for_hold_walk](functions-3.md#anim_and_audio_for_hold_walk)
   - [anim_and_audio_for_walk](functions-3.md#anim_and_audio_for_walk)
   - [apply_landing_accel](functions-3.md#apply_landing_accel)
   - [apply_slope_accel](functions-3.md#apply_slope_accel)
   - [apply_slope_decel](functions-3.md#apply_slope_decel)
   - [begin_braking_action](functions-3.md#begin_braking_action)
   - [begin_walking_action](functions-3.md#begin_walking_action)
   - [check_common_moving_cancels](functions-3.md#check_common_moving_cancels)
   - [check_ground_dive_or_punch](functions-3.md#check_ground_dive_or_punch)
   - [check_ledge_climb_down](functions-3.md#check_ledge_climb_down)
   - [common_ground_knockback_action](functions-3.md#common_ground_knockback_action)
   - [common_landing_action](functions-3.md#common_landing_action)
   - [common_slide_action](functions-3.md#common_slide_action)
   - [common_slide_action_with_jump](functions-3.md#common_slide_action_with_jump)
   - [mario_execute_moving_action](functions-3.md#mario_execute_moving_action)
   - [play_step_sound](functions-3.md#play_step_sound)
   - [push_or_sidle_wall](functions-3.md#push_or_sidle_wall)
   - [quicksand_jump_land_action](functions-3.md#quicksand_jump_land_action)
   - [set_triple_jump_action](functions-3.md#set_triple_jump_action)
   - [should_begin_sliding](functions-3.md#should_begin_sliding)
   - [slide_bonk](functions-3.md#slide_bonk)
   - [stomach_slide_action](functions-3.md#stomach_slide_action)
   - [tilt_body_butt_slide](functions-3.md#tilt_body_butt_slide)
   - [tilt_body_ground_shell](functions-3.md#tilt_body_ground_shell)
   - [tilt_body_running](functions-3.md#tilt_body_running)
   - [tilt_body_walking](functions-3.md#tilt_body_walking)
   - [update_decelerating_speed](functions-3.md#update_decelerating_speed)
   - [update_shell_speed](functions-3.md#update_shell_speed)
   - [update_sliding](functions-3.md#update_sliding)
   - [update_sliding_angle](functions-3.md#update_sliding_angle)
   - [update_walking_speed](functions-3.md#update_walking_speed)

<br />

- mario_actions_object.c
   - [animated_stationary_ground_step](functions-3.md#animated_stationary_ground_step)
   - [check_common_object_cancels](functions-3.md#check_common_object_cancels)
   - [mario_execute_object_action](functions-3.md#mario_execute_object_action)
   - [mario_update_punch_sequence](functions-3.md#mario_update_punch_sequence)

<br />

- mario_actions_stationary.c
   - [check_common_hold_idle_cancels](functions-3.md#check_common_hold_idle_cancels)
   - [check_common_idle_cancels](functions-3.md#check_common_idle_cancels)
   - [check_common_landing_cancels](functions-3.md#check_common_landing_cancels)
   - [check_common_stationary_cancels](functions-3.md#check_common_stationary_cancels)
   - [landing_step](functions-3.md#landing_step)
   - [mario_execute_stationary_action](functions-3.md#mario_execute_stationary_action)
   - [play_anim_sound](functions-3.md#play_anim_sound)
   - [stopping_step](functions-3.md#stopping_step)

<br />

- mario_actions_submerged.c
   - [apply_water_current](functions-3.md#apply_water_current)
   - [float_surface_gfx](functions-3.md#float_surface_gfx)
   - [mario_execute_submerged_action](functions-3.md#mario_execute_submerged_action)
   - [perform_water_full_step](functions-3.md#perform_water_full_step)
   - [perform_water_step](functions-3.md#perform_water_step)
   - [set_swimming_at_surface_particles](functions-3.md#set_swimming_at_surface_particles)

<br />

- mario_misc.h
   - [bhv_toad_message_init](functions-3.md#bhv_toad_message_init)
   - [bhv_toad_message_loop](functions-3.md#bhv_toad_message_loop)
   - [bhv_unlock_door_star_init](functions-3.md#bhv_unlock_door_star_init)
   - [bhv_unlock_door_star_loop](functions-3.md#bhv_unlock_door_star_loop)

<br />

- mario_step.h
   - [get_additive_y_vel_for_jumps](functions-3.md#get_additive_y_vel_for_jumps)
   - [init_bully_collision_data](functions-3.md#init_bully_collision_data)
   - [mario_bonk_reflection](functions-3.md#mario_bonk_reflection)
   - [mario_push_off_steep_floor](functions-3.md#mario_push_off_steep_floor)
   - [mario_update_moving_sand](functions-3.md#mario_update_moving_sand)
   - [mario_update_quicksand](functions-3.md#mario_update_quicksand)
   - [mario_update_windy_ground](functions-3.md#mario_update_windy_ground)
   - [perform_air_step](functions-3.md#perform_air_step)
   - [perform_ground_step](functions-3.md#perform_ground_step)
   - [set_vel_from_pitch_and_yaw](functions-3.md#set_vel_from_pitch_and_yaw)
   - [stationary_ground_step](functions-3.md#stationary_ground_step)
   - [stop_and_set_height_to_floor](functions-3.md#stop_and_set_height_to_floor)

<br />

- network_player.h
   - [get_network_player_from_area](functions-3.md#get_network_player_from_area)
   - [get_network_player_from_level](functions-3.md#get_network_player_from_level)
   - [get_network_player_smallest_global](functions-3.md#get_network_player_smallest_global)
   - [network_player_connected_count](functions-3.md#network_player_connected_count)
   - [network_player_from_global_index](functions-3.md#network_player_from_global_index)
   - [network_player_set_description](functions-3.md#network_player_set_description)

<br />

- network_utils.h
   - [network_get_player_text_color_string](functions-3.md#network_get_player_text_color_string)
   - [network_global_index_from_local](functions-3.md#network_global_index_from_local)
   - [network_is_server](functions-3.md#network_is_server)
   - [network_local_index_from_global](functions-3.md#network_local_index_from_global)

<br />

- obj_behaviors.c
   - [absf_2](functions-3.md#absf_2)
   - [calc_new_obj_vel_and_pos_y](functions-3.md#calc_new_obj_vel_and_pos_y)
   - [calc_new_obj_vel_and_pos_y_underwater](functions-3.md#calc_new_obj_vel_and_pos_y_underwater)
   - [calc_obj_friction](functions-3.md#calc_obj_friction)
   - [current_mario_room_check](functions-3.md#current_mario_room_check)
   - [is_nearest_mario_state_to_object](functions-3.md#is_nearest_mario_state_to_object)
   - [is_nearest_player_to_object](functions-3.md#is_nearest_player_to_object)
   - [is_other_player_active](functions-3.md#is_other_player_active)
   - [is_player_active](functions-3.md#is_player_active)
   - [is_player_in_local_area](functions-3.md#is_player_in_local_area)
   - [is_point_close_to_object](functions-3.md#is_point_close_to_object)
   - [is_point_within_radius_of_mario](functions-3.md#is_point_within_radius_of_mario)
   - [nearest_interacting_mario_state_to_object](functions-3.md#nearest_interacting_mario_state_to_object)
   - [nearest_interacting_player_to_object](functions-3.md#nearest_interacting_player_to_object)
   - [nearest_mario_state_to_object](functions-3.md#nearest_mario_state_to_object)
   - [nearest_player_to_object](functions-3.md#nearest_player_to_object)
   - [obj_check_floor_death](functions-3.md#obj_check_floor_death)
   - [obj_check_if_facing_toward_angle](functions-3.md#obj_check_if_facing_toward_angle)
   - [obj_find_wall](functions-3.md#obj_find_wall)
   - [obj_find_wall_displacement](functions-3.md#obj_find_wall_displacement)
   - [obj_flicker_and_disappear](functions-3.md#obj_flicker_and_disappear)
   - [obj_lava_death](functions-3.md#obj_lava_death)
   - [obj_move_xyz_using_fvel_and_yaw](functions-3.md#obj_move_xyz_using_fvel_and_yaw)
   - [obj_orient_graph](functions-3.md#obj_orient_graph)
   - [obj_return_and_displace_home](functions-3.md#obj_return_and_displace_home)
   - [obj_return_home_if_safe](functions-3.md#obj_return_home_if_safe)
   - [obj_spawn_yellow_coins](functions-3.md#obj_spawn_yellow_coins)
   - [obj_splash](functions-3.md#obj_splash)
   - [obj_update_pos_vel_xz](functions-3.md#obj_update_pos_vel_xz)
   - [object_step](functions-3.md#object_step)
   - [object_step_without_floor_orient](functions-3.md#object_step_without_floor_orient)
   - [set_object_visibility](functions-3.md#set_object_visibility)
   - [set_yoshi_as_not_dead](functions-3.md#set_yoshi_as_not_dead)
   - [spawn_orange_number](functions-3.md#spawn_orange_number)
   - [turn_obj_away_from_steep_floor](functions-3.md#turn_obj_away_from_steep_floor)
   - [turn_obj_away_from_surface](functions-3.md#turn_obj_away_from_surface)

<br />

- obj_behaviors_2.c
   - [approach_f32_ptr](functions-4.md#approach_f32_ptr)
   - [cur_obj_init_anim_and_check_if_end](functions-4.md#cur_obj_init_anim_and_check_if_end)
   - [cur_obj_init_anim_check_frame](functions-4.md#cur_obj_init_anim_check_frame)
   - [cur_obj_init_anim_extend](functions-4.md#cur_obj_init_anim_extend)
   - [cur_obj_play_sound_at_anim_range](functions-4.md#cur_obj_play_sound_at_anim_range)
   - [cur_obj_set_anim_if_at_end](functions-4.md#cur_obj_set_anim_if_at_end)
   - [cur_obj_spin_all_dimensions](functions-4.md#cur_obj_spin_all_dimensions)
   - [obj_act_knockback](functions-4.md#obj_act_knockback)
   - [obj_act_squished](functions-4.md#obj_act_squished)
   - [obj_bounce_off_walls_edges_objects](functions-4.md#obj_bounce_off_walls_edges_objects)
   - [obj_check_attacks](functions-4.md#obj_check_attacks)
   - [obj_compute_vel_from_move_pitch](functions-4.md#obj_compute_vel_from_move_pitch)
   - [obj_die_if_above_lava_and_health_non_positive](functions-4.md#obj_die_if_above_lava_and_health_non_positive)
   - [obj_die_if_health_non_positive](functions-4.md#obj_die_if_health_non_positive)
   - [obj_face_pitch_approach](functions-4.md#obj_face_pitch_approach)
   - [obj_face_roll_approach](functions-4.md#obj_face_roll_approach)
   - [obj_face_yaw_approach](functions-4.md#obj_face_yaw_approach)
   - [obj_forward_vel_approach](functions-4.md#obj_forward_vel_approach)
   - [obj_get_pitch_from_vel](functions-4.md#obj_get_pitch_from_vel)
   - [obj_get_pitch_to_home](functions-4.md#obj_get_pitch_to_home)
   - [obj_grow_then_shrink](functions-4.md#obj_grow_then_shrink)
   - [obj_handle_attacks](functions-4.md#obj_handle_attacks)
   - [obj_is_near_to_and_facing_mario](functions-4.md#obj_is_near_to_and_facing_mario)
   - [obj_is_rendering_enabled](functions-4.md#obj_is_rendering_enabled)
   - [obj_move_for_one_second](functions-4.md#obj_move_for_one_second)
   - [obj_move_pitch_approach](functions-4.md#obj_move_pitch_approach)
   - [obj_random_fixed_turn](functions-4.md#obj_random_fixed_turn)
   - [obj_resolve_collisions_and_turn](functions-4.md#obj_resolve_collisions_and_turn)
   - [obj_resolve_object_collisions](functions-4.md#obj_resolve_object_collisions)
   - [obj_roll_to_match_yaw_turn](functions-4.md#obj_roll_to_match_yaw_turn)
   - [obj_rotate_yaw_and_bounce_off_walls](functions-4.md#obj_rotate_yaw_and_bounce_off_walls)
   - [obj_set_dist_from_home](functions-4.md#obj_set_dist_from_home)
   - [obj_set_knockback_action](functions-4.md#obj_set_knockback_action)
   - [obj_set_squished_action](functions-4.md#obj_set_squished_action)
   - [obj_smooth_turn](functions-4.md#obj_smooth_turn)
   - [obj_spit_fire](functions-4.md#obj_spit_fire)
   - [obj_turn_pitch_toward_mario](functions-4.md#obj_turn_pitch_toward_mario)
   - [obj_unused_die](functions-4.md#obj_unused_die)
   - [obj_update_blinking](functions-4.md#obj_update_blinking)
   - [obj_update_standard_actions](functions-4.md#obj_update_standard_actions)
   - [obj_y_vel_approach](functions-4.md#obj_y_vel_approach)
   - [oscillate_toward](functions-4.md#oscillate_toward)
   - [platform_on_track_update_pos_or_spawn_ball](functions-4.md#platform_on_track_update_pos_or_spawn_ball)
   - [random_linear_offset](functions-4.md#random_linear_offset)
   - [random_mod_offset](functions-4.md#random_mod_offset)
   - [treat_far_home_as_mario](functions-4.md#treat_far_home_as_mario)

<br />

- object_helpers.c
   - [abs_angle_diff](functions-4.md#abs_angle_diff)
   - [apply_drag_to_value](functions-4.md#apply_drag_to_value)
   - [approach_f32_signed](functions-4.md#approach_f32_signed)
   - [approach_f32_symmetric](functions-4.md#approach_f32_symmetric)
   - [approach_s16_symmetric](functions-4.md#approach_s16_symmetric)
   - [bhv_dust_smoke_loop](functions-4.md#bhv_dust_smoke_loop)
   - [bhv_init_room](functions-4.md#bhv_init_room)
   - [bit_shift_left](functions-4.md#bit_shift_left)
   - [chain_segment_init](functions-4.md#chain_segment_init)
   - [clear_move_flag](functions-4.md#clear_move_flag)
   - [clear_time_stop_flags](functions-4.md#clear_time_stop_flags)
   - [count_objects_with_behavior](functions-4.md#count_objects_with_behavior)
   - [count_unimportant_objects](functions-4.md#count_unimportant_objects)
   - [cur_obj_abs_y_dist_to_home](functions-4.md#cur_obj_abs_y_dist_to_home)
   - [cur_obj_advance_looping_anim](functions-4.md#cur_obj_advance_looping_anim)
   - [cur_obj_align_gfx_with_floor](functions-4.md#cur_obj_align_gfx_with_floor)
   - [cur_obj_angle_to_home](functions-4.md#cur_obj_angle_to_home)
   - [cur_obj_apply_drag_xz](functions-4.md#cur_obj_apply_drag_xz)
   - [cur_obj_become_intangible](functions-4.md#cur_obj_become_intangible)
   - [cur_obj_become_tangible](functions-4.md#cur_obj_become_tangible)
   - [cur_obj_can_mario_activate_textbox](functions-4.md#cur_obj_can_mario_activate_textbox)
   - [cur_obj_can_mario_activate_textbox_2](functions-4.md#cur_obj_can_mario_activate_textbox_2)
   - [cur_obj_change_action](functions-4.md#cur_obj_change_action)
   - [cur_obj_check_anim_frame](functions-4.md#cur_obj_check_anim_frame)
   - [cur_obj_check_anim_frame_in_range](functions-4.md#cur_obj_check_anim_frame_in_range)
   - [cur_obj_check_frame_prior_current_frame](functions-4.md#cur_obj_check_frame_prior_current_frame)
   - [cur_obj_check_grabbed_mario](functions-4.md#cur_obj_check_grabbed_mario)
   - [cur_obj_check_if_at_animation_end](functions-4.md#cur_obj_check_if_at_animation_end)
   - [cur_obj_check_if_near_animation_end](functions-4.md#cur_obj_check_if_near_animation_end)
   - [cur_obj_check_interacted](functions-4.md#cur_obj_check_interacted)
   - [cur_obj_clear_interact_status_flag](functions-4.md#cur_obj_clear_interact_status_flag)
   - [cur_obj_compute_vel_xz](functions-4.md#cur_obj_compute_vel_xz)
   - [cur_obj_count_objects_with_behavior](functions-4.md#cur_obj_count_objects_with_behavior)
   - [cur_obj_detect_steep_floor](functions-4.md#cur_obj_detect_steep_floor)
   - [cur_obj_disable](functions-4.md#cur_obj_disable)
   - [cur_obj_disable_rendering](functions-4.md#cur_obj_disable_rendering)
   - [cur_obj_disable_rendering_and_become_intangible](functions-4.md#cur_obj_disable_rendering_and_become_intangible)
   - [cur_obj_dist_to_nearest_object_with_behavior](functions-4.md#cur_obj_dist_to_nearest_object_with_behavior)
   - [cur_obj_enable_rendering](functions-4.md#cur_obj_enable_rendering)
   - [cur_obj_enable_rendering_2](functions-4.md#cur_obj_enable_rendering_2)
   - [cur_obj_enable_rendering_and_become_tangible](functions-4.md#cur_obj_enable_rendering_and_become_tangible)
   - [cur_obj_enable_rendering_if_mario_in_room](functions-4.md#cur_obj_enable_rendering_if_mario_in_room)
   - [cur_obj_end_dialog](functions-4.md#cur_obj_end_dialog)
   - [cur_obj_extend_animation_if_at_end](functions-4.md#cur_obj_extend_animation_if_at_end)
   - [cur_obj_find_nearby_held_actor](functions-4.md#cur_obj_find_nearby_held_actor)
   - [cur_obj_find_nearest_object_with_behavior](functions-4.md#cur_obj_find_nearest_object_with_behavior)
   - [cur_obj_find_nearest_pole](functions-4.md#cur_obj_find_nearest_pole)
   - [cur_obj_follow_path](functions-4.md#cur_obj_follow_path)
   - [cur_obj_forward_vel_approach_upward](functions-4.md#cur_obj_forward_vel_approach_upward)
   - [cur_obj_get_dropped](functions-4.md#cur_obj_get_dropped)
   - [cur_obj_get_thrown_or_placed](functions-4.md#cur_obj_get_thrown_or_placed)
   - [cur_obj_has_behavior](functions-4.md#cur_obj_has_behavior)
   - [cur_obj_has_model](functions-4.md#cur_obj_has_model)
   - [cur_obj_hide](functions-4.md#cur_obj_hide)
   - [cur_obj_hide_if_mario_far_away_y](functions-4.md#cur_obj_hide_if_mario_far_away_y)
   - [cur_obj_if_hit_wall_bounce_away](functions-4.md#cur_obj_if_hit_wall_bounce_away)
   - [cur_obj_init_animation](functions-4.md#cur_obj_init_animation)
   - [cur_obj_init_animation_and_anim_frame](functions-4.md#cur_obj_init_animation_and_anim_frame)
   - [cur_obj_init_animation_and_check_if_near_end](functions-4.md#cur_obj_init_animation_and_check_if_near_end)
   - [cur_obj_init_animation_and_extend_if_at_end](functions-4.md#cur_obj_init_animation_and_extend_if_at_end)
   - [cur_obj_init_animation_with_accel_and_sound](functions-4.md#cur_obj_init_animation_with_accel_and_sound)
   - [cur_obj_init_animation_with_sound](functions-4.md#cur_obj_init_animation_with_sound)
   - [cur_obj_is_any_player_on_platform](functions-4.md#cur_obj_is_any_player_on_platform)
   - [cur_obj_is_mario_ground_pounding_platform](functions-4.md#cur_obj_is_mario_ground_pounding_platform)
   - [cur_obj_is_mario_on_platform](functions-4.md#cur_obj_is_mario_on_platform)
   - [cur_obj_lateral_dist_from_mario_to_home](functions-4.md#cur_obj_lateral_dist_from_mario_to_home)
   - [cur_obj_lateral_dist_from_obj_to_home](functions-4.md#cur_obj_lateral_dist_from_obj_to_home)
   - [cur_obj_lateral_dist_to_home](functions-4.md#cur_obj_lateral_dist_to_home)
   - [cur_obj_mario_far_away](functions-4.md#cur_obj_mario_far_away)
   - [cur_obj_move_after_thrown_or_dropped](functions-4.md#cur_obj_move_after_thrown_or_dropped)
   - [cur_obj_move_standard](functions-4.md#cur_obj_move_standard)
   - [cur_obj_move_up_and_down](functions-4.md#cur_obj_move_up_and_down)
   - [cur_obj_move_update_ground_air_flags](functions-4.md#cur_obj_move_update_ground_air_flags)
   - [cur_obj_move_update_underwater_flags](functions-4.md#cur_obj_move_update_underwater_flags)
   - [cur_obj_move_using_fvel_and_gravity](functions-4.md#cur_obj_move_using_fvel_and_gravity)
   - [cur_obj_move_using_vel](functions-4.md#cur_obj_move_using_vel)
   - [cur_obj_move_using_vel_and_gravity](functions-4.md#cur_obj_move_using_vel_and_gravity)
   - [cur_obj_move_xz](functions-4.md#cur_obj_move_xz)
   - [cur_obj_move_xz_using_fvel_and_yaw](functions-4.md#cur_obj_move_xz_using_fvel_and_yaw)
   - [cur_obj_move_y](functions-4.md#cur_obj_move_y)
   - [cur_obj_move_y_and_get_water_level](functions-4.md#cur_obj_move_y_and_get_water_level)
   - [cur_obj_move_y_with_terminal_vel](functions-4.md#cur_obj_move_y_with_terminal_vel)
   - [cur_obj_nearest_object_with_behavior](functions-4.md#cur_obj_nearest_object_with_behavior)
   - [cur_obj_outside_home_rectangle](functions-4.md#cur_obj_outside_home_rectangle)
   - [cur_obj_outside_home_square](functions-4.md#cur_obj_outside_home_square)
   - [cur_obj_progress_direction_table](functions-4.md#cur_obj_progress_direction_table)
   - [cur_obj_push_mario_away](functions-4.md#cur_obj_push_mario_away)
   - [cur_obj_push_mario_away_from_cylinder](functions-4.md#cur_obj_push_mario_away_from_cylinder)
   - [cur_obj_reflect_move_angle_off_wall](functions-4.md#cur_obj_reflect_move_angle_off_wall)
   - [cur_obj_reset_timer_and_subaction](functions-4.md#cur_obj_reset_timer_and_subaction)
   - [cur_obj_resolve_wall_collisions](functions-4.md#cur_obj_resolve_wall_collisions)
   - [cur_obj_reverse_animation](functions-4.md#cur_obj_reverse_animation)
   - [cur_obj_rotate_face_angle_using_vel](functions-4.md#cur_obj_rotate_face_angle_using_vel)
   - [cur_obj_rotate_move_angle_using_vel](functions-4.md#cur_obj_rotate_move_angle_using_vel)
   - [cur_obj_rotate_yaw_toward](functions-4.md#cur_obj_rotate_yaw_toward)
   - [cur_obj_scale](functions-4.md#cur_obj_scale)
   - [cur_obj_scale_over_time](functions-4.md#cur_obj_scale_over_time)
   - [cur_obj_set_behavior](functions-4.md#cur_obj_set_behavior)
   - [cur_obj_set_direction_table](functions-4.md#cur_obj_set_direction_table)
   - [cur_obj_set_face_angle_to_move_angle](functions-4.md#cur_obj_set_face_angle_to_move_angle)
   - [cur_obj_set_hitbox_and_die_if_attacked](functions-4.md#cur_obj_set_hitbox_and_die_if_attacked)
   - [cur_obj_set_hitbox_radius_and_height](functions-4.md#cur_obj_set_hitbox_radius_and_height)
   - [cur_obj_set_home_once](functions-4.md#cur_obj_set_home_once)
   - [cur_obj_set_hurtbox_radius_and_height](functions-4.md#cur_obj_set_hurtbox_radius_and_height)
   - [cur_obj_set_pos_relative](functions-4.md#cur_obj_set_pos_relative)
   - [cur_obj_set_pos_relative_to_parent](functions-4.md#cur_obj_set_pos_relative_to_parent)
   - [cur_obj_set_pos_to_home](functions-4.md#cur_obj_set_pos_to_home)
   - [cur_obj_set_pos_to_home_and_stop](functions-4.md#cur_obj_set_pos_to_home_and_stop)
   - [cur_obj_set_pos_to_home_with_debug](functions-4.md#cur_obj_set_pos_to_home_with_debug)
   - [cur_obj_set_pos_via_transform](functions-4.md#cur_obj_set_pos_via_transform)
   - [cur_obj_set_vel_from_mario_vel](functions-4.md#cur_obj_set_vel_from_mario_vel)
   - [cur_obj_set_y_vel_and_animation](functions-4.md#cur_obj_set_y_vel_and_animation)
   - [cur_obj_shake_screen](functions-4.md#cur_obj_shake_screen)
   - [cur_obj_shake_y](functions-4.md#cur_obj_shake_y)
   - [cur_obj_shake_y_until](functions-4.md#cur_obj_shake_y_until)
   - [cur_obj_spawn_loot_blue_coin](functions-4.md#cur_obj_spawn_loot_blue_coin)
   - [cur_obj_spawn_loot_coin_at_mario_pos](functions-4.md#cur_obj_spawn_loot_coin_at_mario_pos)
   - [cur_obj_spawn_particles](functions-4.md#cur_obj_spawn_particles)
   - [cur_obj_spawn_star_at_y_offset](functions-4.md#cur_obj_spawn_star_at_y_offset)
   - [cur_obj_start_cam_event](functions-4.md#cur_obj_start_cam_event)
   - [cur_obj_unhide](functions-4.md#cur_obj_unhide)
   - [cur_obj_unrender_and_reset_state](functions-4.md#cur_obj_unrender_and_reset_state)
   - [cur_obj_unused_init_on_floor](functions-4.md#cur_obj_unused_init_on_floor)
   - [cur_obj_unused_play_footstep_sound](functions-4.md#cur_obj_unused_play_footstep_sound)
   - [cur_obj_unused_resolve_wall_collisions](functions-4.md#cur_obj_unused_resolve_wall_collisions)
   - [cur_obj_update_floor](functions-4.md#cur_obj_update_floor)
   - [cur_obj_update_floor_and_resolve_wall_collisions](functions-4.md#cur_obj_update_floor_and_resolve_wall_collisions)
   - [cur_obj_update_floor_and_walls](functions-4.md#cur_obj_update_floor_and_walls)
   - [cur_obj_update_floor_height](functions-4.md#cur_obj_update_floor_height)
   - [cur_obj_update_floor_height_and_get_floor](functions-4.md#cur_obj_update_floor_height_and_get_floor)
   - [cur_obj_wait_then_blink](functions-4.md#cur_obj_wait_then_blink)
   - [cur_obj_was_attacked_or_ground_pounded](functions-4.md#cur_obj_was_attacked_or_ground_pounded)
   - [cur_obj_within_12k_bounds](functions-4.md#cur_obj_within_12k_bounds)
   - [disable_time_stop](functions-4.md#disable_time_stop)
   - [disable_time_stop_including_mario](functions-4.md#disable_time_stop_including_mario)
   - [dist_between_object_and_point](functions-4.md#dist_between_object_and_point)
   - [dist_between_objects](functions-4.md#dist_between_objects)
   - [enable_time_stop](functions-4.md#enable_time_stop)
   - [enable_time_stop_if_alone](functions-4.md#enable_time_stop_if_alone)
   - [enable_time_stop_including_mario](functions-4.md#enable_time_stop_including_mario)
   - [find_object_with_behavior](functions-4.md#find_object_with_behavior)
   - [find_unimportant_object](functions-4.md#find_unimportant_object)
   - [geo_offset_klepto_debug](functions-4.md#geo_offset_klepto_debug)
   - [get_object_list_from_behavior](functions-4.md#get_object_list_from_behavior)
   - [increment_velocity_toward_range](functions-4.md#increment_velocity_toward_range)
   - [is_item_in_array](functions-4.md#is_item_in_array)
   - [is_mario_moving_fast_or_in_air](functions-4.md#is_mario_moving_fast_or_in_air)
   - [lateral_dist_between_objects](functions-4.md#lateral_dist_between_objects)
   - [mario_is_dive_sliding](functions-4.md#mario_is_dive_sliding)
   - [mario_is_in_air_action](functions-4.md#mario_is_in_air_action)
   - [mario_is_within_rectangle](functions-4.md#mario_is_within_rectangle)
   - [mario_set_flag](functions-4.md#mario_set_flag)
   - [obj_angle_to_object](functions-4.md#obj_angle_to_object)
   - [obj_angle_to_point](functions-4.md#obj_angle_to_point)
   - [obj_apply_scale_to_transform](functions-4.md#obj_apply_scale_to_transform)
   - [obj_attack_collided_from_other_object](functions-4.md#obj_attack_collided_from_other_object)
   - [obj_become_tangible](functions-4.md#obj_become_tangible)
   - [obj_build_relative_transform](functions-4.md#obj_build_relative_transform)
   - [obj_build_transform_from_pos_and_angle](functions-4.md#obj_build_transform_from_pos_and_angle)
   - [obj_build_transform_relative_to_parent](functions-4.md#obj_build_transform_relative_to_parent)
   - [obj_build_vel_from_transform](functions-4.md#obj_build_vel_from_transform)
   - [obj_check_if_collided_with_object](functions-4.md#obj_check_if_collided_with_object)
   - [obj_copy_angle](functions-4.md#obj_copy_angle)
   - [obj_copy_behavior_params](functions-4.md#obj_copy_behavior_params)
   - [obj_copy_graph_y_offset](functions-4.md#obj_copy_graph_y_offset)
   - [obj_copy_pos](functions-4.md#obj_copy_pos)
   - [obj_copy_pos_and_angle](functions-4.md#obj_copy_pos_and_angle)
   - [obj_copy_scale](functions-4.md#obj_copy_scale)
   - [obj_create_transform_from_self](functions-4.md#obj_create_transform_from_self)
   - [obj_explode_and_spawn_coins](functions-4.md#obj_explode_and_spawn_coins)
   - [obj_has_behavior](functions-4.md#obj_has_behavior)
   - [obj_init_animation](functions-4.md#obj_init_animation)
   - [obj_is_hidden](functions-4.md#obj_is_hidden)
   - [obj_mark_for_deletion](functions-4.md#obj_mark_for_deletion)
   - [obj_pitch_to_object](functions-4.md#obj_pitch_to_object)
   - [obj_scale](functions-4.md#obj_scale)
   - [obj_scale_random](functions-4.md#obj_scale_random)
   - [obj_scale_xyz](functions-4.md#obj_scale_xyz)
   - [obj_set_angle](functions-4.md#obj_set_angle)
   - [obj_set_behavior](functions-4.md#obj_set_behavior)
   - [obj_set_billboard](functions-4.md#obj_set_billboard)
   - [obj_set_cylboard](functions-4.md#obj_set_cylboard)
   - [obj_set_face_angle_to_move_angle](functions-4.md#obj_set_face_angle_to_move_angle)
   - [obj_set_gfx_pos_at_obj_pos](functions-4.md#obj_set_gfx_pos_at_obj_pos)
   - [obj_set_gfx_pos_from_pos](functions-4.md#obj_set_gfx_pos_from_pos)
   - [obj_set_held_state](functions-4.md#obj_set_held_state)
   - [obj_set_hitbox](functions-4.md#obj_set_hitbox)
   - [obj_set_parent_relative_pos](functions-4.md#obj_set_parent_relative_pos)
   - [obj_set_pos](functions-4.md#obj_set_pos)
   - [obj_set_pos_relative](functions-4.md#obj_set_pos_relative)
   - [obj_set_throw_matrix_from_transform](functions-4.md#obj_set_throw_matrix_from_transform)
   - [obj_spawn_loot_blue_coins](functions-4.md#obj_spawn_loot_blue_coins)
   - [obj_spawn_loot_coins](functions-4.md#obj_spawn_loot_coins)
   - [obj_spawn_loot_yellow_coins](functions-4.md#obj_spawn_loot_yellow_coins)
   - [obj_translate_local](functions-4.md#obj_translate_local)
   - [obj_translate_xyz_random](functions-4.md#obj_translate_xyz_random)
   - [obj_translate_xz_random](functions-4.md#obj_translate_xz_random)
   - [obj_turn_toward_object](functions-4.md#obj_turn_toward_object)
   - [player_performed_grab_escape_action](functions-4.md#player_performed_grab_escape_action)
   - [random_f32_around_zero](functions-4.md#random_f32_around_zero)
   - [set_mario_interact_hoot_if_in_range](functions-4.md#set_mario_interact_hoot_if_in_range)
   - [set_time_stop_flags](functions-4.md#set_time_stop_flags)
   - [set_time_stop_flags_if_alone](functions-4.md#set_time_stop_flags_if_alone)
   - [signum_positive](functions-4.md#signum_positive)
   - [spawn_base_star_with_no_lvl_exit](functions-4.md#spawn_base_star_with_no_lvl_exit)
   - [spawn_mist_particles](functions-4.md#spawn_mist_particles)
   - [spawn_mist_particles_with_sound](functions-4.md#spawn_mist_particles_with_sound)
   - [spawn_star_with_no_lvl_exit](functions-4.md#spawn_star_with_no_lvl_exit)
   - [spawn_water_droplet](functions-4.md#spawn_water_droplet)
   - [stub_obj_helpers_3](functions-4.md#stub_obj_helpers_3)
   - [stub_obj_helpers_4](functions-4.md#stub_obj_helpers_4)

<br />

- object_list_processor.h
   - [set_object_respawn_info_bits](functions-4.md#set_object_respawn_info_bits)

<br />

- rumble_init.c
   - [queue_rumble_data](functions-4.md#queue_rumble_data)
   - [queue_rumble_data_mario](functions-4.md#queue_rumble_data_mario)
   - [queue_rumble_data_object](functions-4.md#queue_rumble_data_object)
   - [reset_rumble_timers](functions-4.md#reset_rumble_timers)
   - [reset_rumble_timers_2](functions-4.md#reset_rumble_timers_2)

<br />

- save_file.h
   - [save_file_clear_flags](functions-4.md#save_file_clear_flags)
   - [save_file_get_cap_pos](functions-4.md#save_file_get_cap_pos)
   - [save_file_get_course_coin_score](functions-4.md#save_file_get_course_coin_score)
   - [save_file_get_course_star_count](functions-4.md#save_file_get_course_star_count)
   - [save_file_get_flags](functions-4.md#save_file_get_flags)
   - [save_file_get_max_coin_score](functions-4.md#save_file_get_max_coin_score)
   - [save_file_get_sound_mode](functions-4.md#save_file_get_sound_mode)
   - [save_file_get_star_flags](functions-4.md#save_file_get_star_flags)
   - [save_file_get_total_star_count](functions-4.md#save_file_get_total_star_count)
   - [save_file_set_flags](functions-4.md#save_file_set_flags)

<br />

- smlua_audio_utils.h
   - [audio_sample_destroy](functions-4.md#audio_sample_destroy)
   - [audio_sample_load](functions-4.md#audio_sample_load)
   - [audio_sample_play](functions-4.md#audio_sample_play)
   - [audio_stream_destroy](functions-4.md#audio_stream_destroy)
   - [audio_stream_get_frequency](functions-4.md#audio_stream_get_frequency)
   - [audio_stream_get_looping](functions-4.md#audio_stream_get_looping)
   - [audio_stream_get_position](functions-4.md#audio_stream_get_position)
   - [audio_stream_get_tempo](functions-4.md#audio_stream_get_tempo)
   - [audio_stream_get_volume](functions-4.md#audio_stream_get_volume)
   - [audio_stream_load](functions-4.md#audio_stream_load)
   - [audio_stream_load_url](functions-4.md#audio_stream_load_url)
   - [audio_stream_pause](functions-4.md#audio_stream_pause)
   - [audio_stream_play](functions-4.md#audio_stream_play)
   - [audio_stream_set_frequency](functions-4.md#audio_stream_set_frequency)
   - [audio_stream_set_looping](functions-4.md#audio_stream_set_looping)
   - [audio_stream_set_position](functions-4.md#audio_stream_set_position)
   - [audio_stream_set_speed](functions-4.md#audio_stream_set_speed)
   - [audio_stream_set_tempo](functions-4.md#audio_stream_set_tempo)
   - [audio_stream_set_volume](functions-4.md#audio_stream_set_volume)
   - [audio_stream_stop](functions-4.md#audio_stream_stop)
   - [smlua_audio_utils_replace_sequence](functions-4.md#smlua_audio_utils_replace_sequence)
   - [smlua_audio_utils_reset_all](functions-4.md#smlua_audio_utils_reset_all)

<br />

- smlua_collision_utils.h
   - [collision_find_surface_on_ray](functions-4.md#collision_find_surface_on_ray)
   - [get_water_surface_pseudo_floor](functions-4.md#get_water_surface_pseudo_floor)
   - [smlua_collision_util_get](functions-4.md#smlua_collision_util_get)

<br />

- smlua_level_utils.h
   - [level_register](functions-4.md#level_register)
   - [smlua_level_util_get_info](functions-4.md#smlua_level_util_get_info)
   - [smlua_level_util_get_info_from_short_name](functions-4.md#smlua_level_util_get_info_from_short_name)
   - [warp_exit_level](functions-4.md#warp_exit_level)
   - [warp_restart_level](functions-4.md#warp_restart_level)
   - [warp_to_castle](functions-4.md#warp_to_castle)
   - [warp_to_level](functions-4.md#warp_to_level)

<br />

- smlua_misc_utils.h
   - [allocate_mario_action](functions-4.md#allocate_mario_action)
   - [camera_config_enable_analog_cam](functions-4.md#camera_config_enable_analog_cam)
   - [camera_config_enable_free_cam](functions-4.md#camera_config_enable_free_cam)
   - [camera_config_enable_mouse_look](functions-4.md#camera_config_enable_mouse_look)
   - [camera_config_get_aggression](functions-4.md#camera_config_get_aggression)
   - [camera_config_get_deceleration](functions-4.md#camera_config_get_deceleration)
   - [camera_config_get_pan_level](functions-4.md#camera_config_get_pan_level)
   - [camera_config_get_x_sensitivity](functions-4.md#camera_config_get_x_sensitivity)
   - [camera_config_get_y_sensitivity](functions-4.md#camera_config_get_y_sensitivity)
   - [camera_config_invert_x](functions-4.md#camera_config_invert_x)
   - [camera_config_invert_y](functions-4.md#camera_config_invert_y)
   - [camera_config_is_analog_cam_enabled](functions-4.md#camera_config_is_analog_cam_enabled)
   - [camera_config_is_free_cam_enabled](functions-4.md#camera_config_is_free_cam_enabled)
   - [camera_config_is_mouse_look_enabled](functions-4.md#camera_config_is_mouse_look_enabled)
   - [camera_config_is_x_inverted](functions-4.md#camera_config_is_x_inverted)
   - [camera_config_is_y_inverted](functions-4.md#camera_config_is_y_inverted)
   - [camera_config_set_aggression](functions-4.md#camera_config_set_aggression)
   - [camera_config_set_deceleration](functions-4.md#camera_config_set_deceleration)
   - [camera_config_set_pan_level](functions-4.md#camera_config_set_pan_level)
   - [camera_config_set_x_sensitivity](functions-4.md#camera_config_set_x_sensitivity)
   - [camera_config_set_y_sensitivity](functions-4.md#camera_config_set_y_sensitivity)
   - [camera_freeze](functions-4.md#camera_freeze)
   - [camera_unfreeze](functions-4.md#camera_unfreeze)
   - [deref_s32_pointer](functions-4.md#deref_s32_pointer)
   - [get_current_save_file_num](functions-4.md#get_current_save_file_num)
   - [get_environment_region](functions-4.md#get_environment_region)
   - [get_hand_foot_pos_x](functions-4.md#get_hand_foot_pos_x)
   - [get_hand_foot_pos_y](functions-4.md#get_hand_foot_pos_y)
   - [get_hand_foot_pos_z](functions-4.md#get_hand_foot_pos_z)
   - [get_network_area_timer](functions-4.md#get_network_area_timer)
   - [get_temp_s32_pointer](functions-4.md#get_temp_s32_pointer)
   - [hud_get_value](functions-4.md#hud_get_value)
   - [hud_hide](functions-4.md#hud_hide)
   - [hud_render_power_meter](functions-4.md#hud_render_power_meter)
   - [hud_set_value](functions-4.md#hud_set_value)
   - [hud_show](functions-4.md#hud_show)
   - [is_game_paused](functions-4.md#is_game_paused)
   - [movtexqc_register](functions-4.md#movtexqc_register)
   - [play_transition](functions-4.md#play_transition)
   - [save_file_set_using_backup_slot](functions-4.md#save_file_set_using_backup_slot)
   - [set_environment_region](functions-4.md#set_environment_region)
   - [set_override_far](functions-4.md#set_override_far)
   - [set_override_fov](functions-4.md#set_override_fov)
   - [set_override_near](functions-4.md#set_override_near)

<br />

- smlua_model_utils.h
   - [smlua_model_util_get_id](functions-4.md#smlua_model_util_get_id)

<br />

- smlua_obj_utils.h
   - [get_temp_object_hitbox](functions-4.md#get_temp_object_hitbox)
   - [get_trajectory](functions-4.md#get_trajectory)
   - [obj_check_hitbox_overlap](functions-4.md#obj_check_hitbox_overlap)
   - [obj_count_objects_with_behavior_id](functions-4.md#obj_count_objects_with_behavior_id)
   - [obj_get_first](functions-4.md#obj_get_first)
   - [obj_get_first_with_behavior_id](functions-4.md#obj_get_first_with_behavior_id)
   - [obj_get_first_with_behavior_id_and_field_f32](functions-4.md#obj_get_first_with_behavior_id_and_field_f32)
   - [obj_get_first_with_behavior_id_and_field_s32](functions-4.md#obj_get_first_with_behavior_id_and_field_s32)
   - [obj_get_nearest_object_with_behavior_id](functions-4.md#obj_get_nearest_object_with_behavior_id)
   - [obj_get_next](functions-4.md#obj_get_next)
   - [obj_get_next_with_same_behavior_id](functions-4.md#obj_get_next_with_same_behavior_id)
   - [obj_get_next_with_same_behavior_id_and_field_f32](functions-4.md#obj_get_next_with_same_behavior_id_and_field_f32)
   - [obj_get_next_with_same_behavior_id_and_field_s32](functions-4.md#obj_get_next_with_same_behavior_id_and_field_s32)
   - [obj_get_temp_spawn_particles_info](functions-4.md#obj_get_temp_spawn_particles_info)
   - [obj_has_behavior_id](functions-4.md#obj_has_behavior_id)
   - [obj_has_model_extended](functions-4.md#obj_has_model_extended)
   - [obj_is_valid_for_interaction](functions-4.md#obj_is_valid_for_interaction)
   - [obj_move_xyz](functions-4.md#obj_move_xyz)
   - [obj_set_model_extended](functions-4.md#obj_set_model_extended)
   - [obj_set_vel](functions-4.md#obj_set_vel)
   - [spawn_non_sync_object](functions-4.md#spawn_non_sync_object)
   - [spawn_sync_object](functions-4.md#spawn_sync_object)

<br />

- smlua_text_utils.h
   - [smlua_text_utils_castle_secret_stars_replace](functions-4.md#smlua_text_utils_castle_secret_stars_replace)
   - [smlua_text_utils_course_acts_replace](functions-4.md#smlua_text_utils_course_acts_replace)
   - [smlua_text_utils_dialog_replace](functions-4.md#smlua_text_utils_dialog_replace)
   - [smlua_text_utils_extra_text_replace](functions-4.md#smlua_text_utils_extra_text_replace)
   - [smlua_text_utils_reset_all](functions-4.md#smlua_text_utils_reset_all)
   - [smlua_text_utils_secret_star_replace](functions-4.md#smlua_text_utils_secret_star_replace)

<br />

- sound_init.h
   - [disable_background_sound](functions-4.md#disable_background_sound)
   - [enable_background_sound](functions-4.md#enable_background_sound)
   - [fadeout_cap_music](functions-4.md#fadeout_cap_music)
   - [fadeout_level_music](functions-4.md#fadeout_level_music)
   - [fadeout_music](functions-4.md#fadeout_music)
   - [lower_background_noise](functions-4.md#lower_background_noise)
   - [play_cap_music](functions-4.md#play_cap_music)
   - [play_cutscene_music](functions-4.md#play_cutscene_music)
   - [play_infinite_stairs_music](functions-4.md#play_infinite_stairs_music)
   - [play_menu_sounds](functions-4.md#play_menu_sounds)
   - [play_painting_eject_sound](functions-4.md#play_painting_eject_sound)
   - [play_shell_music](functions-4.md#play_shell_music)
   - [raise_background_noise](functions-4.md#raise_background_noise)
   - [reset_volume](functions-4.md#reset_volume)
   - [set_background_music](functions-4.md#set_background_music)
   - [stop_cap_music](functions-4.md#stop_cap_music)
   - [stop_shell_music](functions-4.md#stop_shell_music)

<br />

- spawn_sound.c
   - [calc_dist_to_volume_range_1](functions-4.md#calc_dist_to_volume_range_1)
   - [calc_dist_to_volume_range_2](functions-4.md#calc_dist_to_volume_range_2)
   - [cur_obj_play_sound_1](functions-4.md#cur_obj_play_sound_1)
   - [cur_obj_play_sound_2](functions-4.md#cur_obj_play_sound_2)
   - [exec_anim_sound_state](functions-4.md#exec_anim_sound_state)

<br />

- surface_collision.h
   - [find_ceil_height](functions-4.md#find_ceil_height)
   - [find_floor_height](functions-4.md#find_floor_height)
   - [find_poison_gas_level](functions-4.md#find_poison_gas_level)
   - [find_wall_collisions](functions-4.md#find_wall_collisions)
   - [find_water_level](functions-4.md#find_water_level)

<br />

- surface_load.h
   - [alloc_surface_pools](functions-4.md#alloc_surface_pools)
   - [clear_dynamic_surfaces](functions-4.md#clear_dynamic_surfaces)
   - [get_area_terrain_size](functions-4.md#get_area_terrain_size)
   - [load_area_terrain](functions-4.md#load_area_terrain)
   - [load_object_collision_model](functions-4.md#load_object_collision_model)

<br />


---
# manually written functions

<br />

## [define_custom_obj_fields](#define_custom_obj_fields)

Defines a custom set of overlapping object fields.

The `fieldTable` table's keys must start with the letter `o` and the values must be either `u32`, `s32`, or `f32`.

### Lua Example
`define_custom_obj_fields({ oCustomField1 = 'u32', oCustomField2 = 's32', oCustomField3 = 'f32' })`

### Parameters
| Field | Type |
| ----- | ---- |
| fieldTable | `Lua Table` |

### C Prototype
`N/A`

[:arrow_up_small:](#)

## [network_init_object](#network_init_object)

Enables synchronization on an object.

- Setting `standardSync` to `true` will automatically synchronize the object at a rate that is determined based on player distance. The commonly used object fields will be automatically synchronized.
- Setting `standardSync` to `false` will not automatically synchronize the object, or add commonly used object fields. The mod must manually call `network_send_object()` when fields have changed.

The `fieldTable` parameter can be `nil`, or a list of object fields.

### Lua Example
`network_init_object(obj, true, { 'oCustomField1', 'oCustomField2', 'oCustomField3' })`

### Parameters
| Field | Type |
| ----- | ---- |
| object | [Object](structs.md#Object) |
| standardSync | `bool` |
| fieldTable | `Lua Table` |

### C Prototype
`N/A`

[:arrow_up_small:](#)

<br />

## [network_send_object](#network_send_object)

Sends a packet that synchronizes an object. This does not need to be called when `standardSync` is enabled.

The `reliable` field will ensure that the packet arrives, but should be used sparingly and only when missing a packet would cause a desync.

### Lua Example
`network_send_object(obj, false)`

### Parameters
| Field | Type |
| ----- | ---- |
| object | [Object](structs.md#Object) |
| reliable | `bool` |

### C Prototype
`N/A`

[:arrow_up_small:](#)

<br />

## [network_send_to](#network_send_to)

Sends a packet to a particular player (using their local index) containing whatever data you want.

`dataTable` can only contain strings, integers, numbers, booleans, and nil

The `reliable` field will ensure that the packet arrives, but should be used sparingly and only when missing a packet would cause a desync.

### Lua Example
`network_send_to(localPlayerIndex, reliable, { data1 = 'hello', data2 = 10})`

### Parameters
| Field | Type |
| ----- | ---- |
| localPlayerIndex | `integer` |
| reliable | `bool` |
| dataTable | `table` |

### C Prototype
`N/A`

[:arrow_up_small:](#)

<br />

## [network_send](#network_send)

Sends a packet to all players containing whatever data you want.

`dataTable` can only contain strings, integers, numbers, booleans, and nil

The `reliable` field will ensure that the packet arrives, but should be used sparingly and only when missing a packet would cause a desync.

### Lua Example
`network_send(reliable, { data1 = 'hello', data2 = 10})`

### Parameters
| Field | Type |
| ----- | ---- |
| reliable | `bool` |
| dataTable | `table` |

### C Prototype
`N/A`

[:arrow_up_small:](#)

<br />

## [djui_hud_render_texture](#djui_hud_render_texture)

Renders a texture to the screen.

### Lua Example
`djui_hud_render_texture(texInfo, x, y, scaleW, scaleH)`

### Parameters
| Field | Type |
| ----- | ---- |
| texInfo | [TextureInfo](structs.md#TextureInfo) |
| x | `number` |
| y | `number` |
| scaleW | `number` |
| scaleH | `number` |

### Returns
- None

### C Prototype
`void djui_hud_render_texture(struct TextureInfo* texInfo, f32 x, f32 y, f32 scaleW, f32 scaleH);`

[:arrow_up_small:](#)

<br />

## [get_texture_info](#get_texture_info)

Retrieves a texture by name.

### Lua Example
`get_texture_info(textureName)`

### Parameters
| Field | Type |
| ----- | ---- |
| textureName | `string` |

### Returns
- [TextureInfo](structs.md#TextureInfo)

### C Prototype
`N/A`

[:arrow_up_small:](#)

<br />

## [djui_hud_render_texture_interpolated](#djui_hud_render_texture_interpolated)

### Lua Example
`djui_hud_render_texture_interpolated(texInfo, prevX, prevY, prevScaleW, prevScaleH, x, y, scaleW, scaleH)`

### Parameters
| Field | Type |
| ----- | ---- |
| texInfo | [TextureInfo](structs.md#TextureInfo) |
| prevX | `number` |
| prevY | `number` |
| prevScaleW | `number` |
| prevScaleH | `number` |
| x | `number` |
| y | `number` |
| scaleW | `number` |
| scaleH | `number` |

### Returns
- None

### C Prototype
`void djui_hud_render_texture_interpolated(struct TextureInfo* texInfo, f32 prevX, f32 prevY, f32 prevScaleW, f32 prevScaleH, f32 x, f32 y, f32 scaleW, f32 scaleH);`

[:arrow_up_small:](#)

<br />

---

1 | [2](functions-2.md) | [3](functions-3.md) | [4](functions-4.md) | [next >](functions-2.md)]

