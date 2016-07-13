#include "Memory.h"

namespace Library
{
	static const DWORD server_base = 0x01C5C260, // 8B 2D ? ? ? ? A1 ? ? ? ? 8D ? 24 ? ? 8B
				 gui_base = 0x01C5C268, // 8B 0D ? ? ? ? 89 ? 24 ? ? ? 6A
				 character_base = 0x01C5C264, // A1 ? ? ? ? 85 C0 75 ? 5F C3 8D
				 people_base = 0x01C60908, // 8B ? ? ? ? ? ? E8 ? ? ? ? ? ? ? ? 0F 84 ? ? ? ? 39 [second result]
				 mob_base = 0x01C6090C; // 8B 0D ? ? ? ? ? E8 ? ? ? ? 8B ? 85 ? 74 ? 8B ? ? 8B ? ? 8D
	static const DWORD tubi_offset = 0x21F0, // 83 ? ? ? ? ? 00 75 ? 83 7C ? ? 00 75 ? 8B
				 global_delay_offset = tubi_offset + 0x4, // tubi offset + 0x4
				 exp_offset = 0x00002550, // DD 9E ? ? ? ? 66 89 ? 24 ? 89 ? 24
				 character_pid_offset = 0x00004D30, // 8B 86 ? ? 00 00 6A D8
				 attack_count_offset = 0x0000B930, // 89 ? ? ? ? 00 C7 ? ? ? ? 00 ? ? ? 00 8D ? ? ? ? 00 C6
				 breath_offset = 0x77C, // 83 B8 ? ? ? ? 00 7E ? 6A 00 6A
				 people_count_offset = 0x18, // second mov below people base 
				 mob_count_offset = 0x10; // 8B 52 ? 83 C7 ? 8D 44 24 ? 50 8B CF FF D2 8B 00 89
	namespace Hacks
	{
		static void Tubi()
		{
			Memory::Pointer::write_int( server_base, tubi_offset, 0 );
			Memory::Pointer::write_int( server_base, global_delay_offset, 0 );
		}
		static void UA()
		{
			Memory::Pointer::write_int( character_base, attack_count_offset, 0 );
		}
		static void Breath()
		{
			Memory::Pointer::write_int( character_base, breath_offset, 0 );
		}
	}
	namespace Util
	{
		static bool in_game()
		{
			return Memory::Pointer::read_int( character_base, character_pid_offset ) > 0;
		}
		static int count_mobs()
		{
			return Memory::Pointer::read_int( mob_base, mob_count_offset );
		}
		static int count_people()
		{
			return Memory::Pointer::read_int( people_base, people_count_offset );
		}
	}
}