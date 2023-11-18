DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20231111004702');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20231111004702');
-- Add your query below.


-- Pathing for Molt Thorn Entry: 14448
SET @NPC := 48345;
UPDATE `creature` SET `wander_distance`=0,`movement_type`=2,`position_x`=-10372.76,`position_y`=-2757.6826,`position_z`=17.499084 WHERE `guid`=@NPC;
DELETE FROM `creature_movement` WHERE `id`=@NPC;
INSERT INTO `creature_movement` (`id`,`point`,`position_x`,`position_y`,`position_z`,`orientation`,`waittime`,`wander_distance`,`script_id`) VALUES
(@NPC,1,-10372.76,-2757.6826,17.499084,100,0,0,0),
(@NPC,2,-10400.012,-2781.2932,17.499088,100,0,0,0),
(@NPC,3,-10419.404,-2802.7551,17.499088,100,0,0,0),
(@NPC,4,-10424.825,-2830.8735,17.499088,100,0,0,0),
(@NPC,5,-10413.998,-2844.0894,17.477198,100,0,0,0),
(@NPC,6,-10386.297,-2875.072,17.499084,100,0,0,0),
(@NPC,7,-10373.333,-2900.8286,17.499084,100,0,0,0),
(@NPC,8,-10351.552,-2923.1472,17.499084,100,0,0,0),
(@NPC,9,-10332.582,-2934.5989,17.423042,100,0,0,0),
(@NPC,10,-10317.686,-2915.348,17.49908,100,0,0,0),
(@NPC,11,-10303.875,-2920.8337,17.49908,100,0,0,0),
(@NPC,12,-10274.936,-2935.7683,17.49908,100,0,0,0),
(@NPC,13,-10299.674,-2915.3694,17.49908,100,0,0,0),
(@NPC,14,-10322.778,-2912.8298,18.183163,100,0,0,0),
(@NPC,15,-10326.502,-2931.2092,17.439022,100,0,0,0),
(@NPC,16,-10341.627,-2950.7422,17.46344,100,0,0,0),
(@NPC,17,-10340.352,-2980.3801,17.475403,100,0,0,0),
(@NPC,18,-10331.167,-3011.9717,17.499086,100,0,0,0),
(@NPC,19,-10320.729,-3022.7256,17.499086,100,0,0,0),
(@NPC,20,-10305.837,-3026.4949,17.499086,100,0,0,0),
(@NPC,21,-10276.681,-3039.2546,17.499092,100,0,0,0),
(@NPC,22,-10305.837,-3026.4949,17.499086,100,0,0,0),
(@NPC,23,-10320.729,-3022.7256,17.499086,100,0,0,0),
(@NPC,24,-10331.167,-3011.9717,17.499086,100,0,0,0),
(@NPC,25,-10340.352,-2980.3801,17.475403,100,0,0,0),
(@NPC,26,-10341.627,-2950.7422,17.46344,100,0,0,0),
(@NPC,27,-10326.502,-2931.2092,17.439022,100,0,0,0),
(@NPC,28,-10322.778,-2912.8298,18.183163,100,0,0,0),
(@NPC,29,-10299.674,-2915.3694,17.49908,100,0,0,0),
(@NPC,30,-10274.936,-2935.7683,17.49908,100,0,0,0),
(@NPC,31,-10303.875,-2920.8337,17.49908,100,0,0,0),
(@NPC,32,-10317.686,-2915.348,17.49908,100,0,0,0),
(@NPC,33,-10332.582,-2934.5989,17.423042,100,0,0,0),
(@NPC,34,-10351.552,-2923.1472,17.499084,100,0,0,0),
(@NPC,35,-10373.333,-2900.8286,17.499084,100,0,0,0),
(@NPC,36,-10386.297,-2875.072,17.499084,100,0,0,0),
(@NPC,37,-10413.998,-2844.0894,17.477198,100,0,0,0),
(@NPC,38,-10424.825,-2830.8735,17.499088,100,0,0,0),
(@NPC,39,-10419.404,-2802.7551,17.499088,100,0,0,0),
(@NPC,40,-10400.012,-2781.2932,17.499088,100,0,0,0);
-- 0x204CB000000E1C0000000C00003DDEA7 .go xyz -10372.76 -2757.6826 17.499084


-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
