add_library( QEngine
			AttackCommand.cpp
			Game.cpp
			Gold.cpp
			MoveCommand.cpp
			Room.cpp
			CommandFactory.cpp
			GameObject.cpp
			GoldFactory.cpp
			Player.cpp) 
target_include_directories ( QEngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})