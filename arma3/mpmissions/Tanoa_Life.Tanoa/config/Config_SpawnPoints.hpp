/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class Tanoa {

        class Civilian {
            class Georgetown {
                displayName = "Georgetown";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "!license_apatride";
            };

            class Oumere {
                displayName = "Oumere";
                spawnMarker = "civ_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Tanouka {
                displayName = "Tanouka";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Lijnhaven {
                              displayName = "Lijnhaven";
                              spawnMarker = "civ_spawn_4";
                              icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                              conditions = "";
                          };
            class Harcourt {
                            displayName = "Harcout";
                            spawnMarker = "civ_spawn_5";
                            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                            conditions = "";
                        };
            class LaRochelle {
                            displayName = "La Rochelle";
                            spawnMarker = "civ_spawn_6";
                            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                            conditions = "";
                        };
        };

        class Apatrides {
             class RebelNW {
                        displayName = $STR_APATRIDE_TUVANAKA;
                        spawnMarker = "Tuvanaka";
                        icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                        conditions = "license_apatride";
             };

             class RebelS {
                        displayName = $STR_APATRIDE_BALA;
                        spawnMarker = "Bala";
                        icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                        conditions = "license_apatride";
             };

             class RebelNE {
                        displayName = $STR_APATRIDE_TAIGA;
                        spawnMarker = "Taïga";
                        icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                        conditions = "license_apatride";
             };

             class Rebel {
                                   displayName = $STR_PIRATE_RAVI-TA;
                                    spawnMarker = "Ravi-ta";
                                    icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                                    conditions = "license_pirate";
             };

             class Rebelz {
                                                            displayName = $PIRATE_SOSOVU;
                                                            spawnMarker = "Sosovu";
                                                            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                                                            conditions = "license_pirate";
             };
        };

        class Cop {
            class NAirport {
                displayName = $STR_SP_Cop_Air_N;
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class SWAirport {
                displayName = $STR_SP_Cop_Air_SW;
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
                conditions = "";
            };

            class GeorgetownHQ {
                displayName = "Georgetown HQ";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };
        };

        class Medic {
            class Lijnhaven {
                            displayName = "Lijnhaven";
                            spawnMarker = "armee_est_spawn_1";
                            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                            conditions = "";
                        };


            class SEHospital {
                displayName = $STR_SP_EMS_SE;
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class TanoukaHospital {
                displayName = $STR_SP_EMS_Tan;
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class NEAirportHospital {
                displayName = $STR_SP_EMS_NEair;
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

        };

    };

};
