def main():

    '''primitive data types'''
    # int
    no_of_space_crew = 7
    # float
    total_fuel = 2550.7
    # bool
    is_hydrogen_liquid = True
    # character
    is_water_supply_active = 'y'
    # str
    target_mission_tonight = "Moon"
    # complex
    a = 4 + 5j
    # None
    get_moon_temperature = None
    
    '''non-primitive data types'''
    # list 
    mission_path = ["moon","explore_universe","mars","venus"]
    # tuple
    capture_speed_per_hours = (1200,780,2599,1200,1250,1873,2500)
    # dict
    space_ship = {
        "no_of_crew" : 7,
        "color" : "silver",
        "path" : ["moon","venus","mars"]
    }
    # set
    space_ship_checking = {"door","engine","fuel","support_tank"}
    return
main()