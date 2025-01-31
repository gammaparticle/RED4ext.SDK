from typing import List

class Item:
    name: str
    pattern: str
    expected: int
    index: int
    offset: int

    def __init__(self, pattern: str, name: str = '', expected: int = 1, index: int = 0, offset: int = 0) -> None:
        self.name = name
        self.pattern = pattern
        self.expected = expected
        self.index = index
        self.offset = offset

class Group:
    name: str
    pointers: List[Item]
    functions: List[Item]

    def __init__(self, name: str, pointers: List[Item] = [], functions: List[Item] = []) -> None:
        self.name = name
        self.pointers = pointers
        self.functions = functions

def get_groups() -> List[Group]:
    # Add new patterns here, please try to keep the groups ordering alphabetized.
    return [
        Group(name='CBaseFunction', functions=[
            Item(name='Execute', pattern='48 89 5C 24 08 57 48 81 EC 90 01 00 00 F6'),
            Item(name='InternalExecute', pattern='40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6'),
            Item(name='Register', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0 44 8B 4C 24 58 48 8B DA 41 83 C9 01')
        ]),

        Group(name='CBaseRTTIType', functions=[
            Item(name='sub_80', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B D9', expected=56, index=0),
            Item(name='sub_88', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F9', expected=72, index=0),
            Item(name='sub_90', pattern='48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 55 48 8D 6C 24 B1', expected=5, index=0),
            Item(name='sub_98', pattern='40 53 55 57 48 83 EC 50 48 8B D9', expected=2, index=0),
            Item(name='sub_A0', pattern='48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA 48 8B D1', expected=1, index=0)
        ]),

        Group(name='CClass', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 49 8B F9', expected=2, index=0),
            Item(name='ToString', pattern='48 8B C4 55 48 8D 68 E8 48 81 EC 10 01 00 00', expected=5, index=0),
            Item(name='sub_80', pattern='40 53 57 41 54 41 56 41 57', expected=13, index=0),
            Item(name='sub_88', pattern='48 89 5C 24 08 48 89 6C 24 18 56 57 41 56', expected=197, index=7),
            Item(name='sub_90', pattern='48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00', expected=2, index=0),
            Item(name='sub_98', pattern='48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00', expected=2, index=1),
            Item(name='sub_A0', pattern='48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20', expected=117, index=0),
            Item(name='sub_B0', pattern='48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 54', expected=250, index=2),
            Item(name='sub_C0', pattern='4C 8B DC 41 55 48 83 EC 60 49 89 5B 10', expected=3, index=0),
            Item(name='GetMaxAlignment', pattern='48 89 5C 24 10 57 48 83 EC 30 F6 41 70 0C 48 8B F9', expected=1, index=0),
            Item(name='sub_D0', pattern='48 89 4C 24 08 53 56 48 83 EC 58', expected=1, index=0),

            Item(name='AllocInstance', pattern='48 89 6C 24 18 56 48 83 EC 30 41 0F B6 E8'),
            Item(name='GetProperty', pattern='48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00')
        ]),

        Group(name='TTypedClass', functions=[
            Item(name='IsEqual', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 56 41 57', expected=453, index=7)
        ]),

        Group(name='CEnum', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 08 48 89 74 24 18 57 48 83 EC 20 48 8B F9', expected=4, index=0),
            Item(name='ToString', pattern='40 53 48 83 EC 20 44 0F B6 49 20 33 C0', expected=1, index=0),
            Item(name='FromString', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B F9 49 8B D8', expected=1, index=0)
        ]),

        Group(name='CBitfield', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 08 48 89 6C 24 18 56 57 41 55', expected=1, index=0),
            Item(name='ToString', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 20 0F B6 41 20', expected=1, index=0),
            Item(name='FromString', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 40', expected=58, index=1)
        ]),

        Group(name='CClassFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0', expected=3, index=1)
        ]),

        Group(name='CClassStaticFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0', expected=3)
        ]),

        Group(name='CGameEngine', pointers=[
            Item(pattern='48 89 05 ? ? ? ? ? 8D ? 88 00 00 00 49 8B', offset=3)
        ]),

        Group(name='CGlobalFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B D9', expected=6)
        ]),

        Group(name='CNamePool', functions=[
            Item(name='AddCstr', pattern='48 89 5C 24 08 57 48 83 EC 30 45 33 C0 48 8B F9'),
            Item(name='AddCString', pattern='48 89 5C 24 08 48 89 74  24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 8B CA E8 ? ? ? ? 48 8B CB 48 8B F8 E8'),
            Item(name='AddPair', pattern='48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2'),
            Item(name='Get', pattern='48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8')
        ]),

        Group(name='CRTTISystem', functions=[
            Item(name='Get', pattern='40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?')
        ]),

        Group(name='CStack', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00', expected=3, index=1)
        ]),

        Group(name='CString', functions=[
            Item(name='ctor', pattern='40 53 48 83 EC 20 33 C0 C6 01 00', expected=4, index=2),
            Item(name='copy', pattern='40 53 48 83 EC 20 48 8B D9 48 3B CA', expected=8, index=0),
            Item(name='dtor', pattern='40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8')
        ]),

        Group(name='DynArray', functions=[
            Item(name='Realloc', pattern='40 56 57 41 54 41 56 48 83 EC 68')
        ]),

        Group(name='Handle', functions=[
            Item(name='ctor', pattern='48 89 5C 24 18 48 89 6C 24 20 57 48 83 EC 60 33 ED'),
            Item(name='DecWeakRef', pattern='40 53 48 83 EC 30 48 8B D9 48 8B 49 08 48 85 C9 74 43 B8 FF FF FF FF')
        ]),

        Group(name='IScriptable', functions=[
            Item(name='GetValueHolder', pattern='40 53 48 83 EC 20 48 83 79 38 00 48 8B D9 75', expected=2, index=1)
        ]),

        Group(name='Memory', functions=[
            Item(name='Vault::Get', pattern='48 8D 05 ? ? ? ? C3', expected=1238, index=4),
            Item(name='Vault::Alloc', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 33 C0', expected=9, index=0),
            Item(name='Vault::AllocAligned', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 33 C0', expected=3, index=0),
            Item(name='Vault::Realloc', pattern='48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56', expected=293, index=0),
            Item(name='Vault::ReallocAligned', pattern='48 89 5C 24 18 56 57 41 56 48 83 EC 40', expected=13, index=0),
            Item(name='Vault::Free', pattern='48 89 5C 24 10 57 48 83 EC 20 4C 8B 81 00 C9 00 00', expected=1, index=0),
            Item(name='Vault::Unk1', pattern='48 89 5C 24 08 57 48 83 EC 20 4C 8B 81 00 C9 00 00', expected=2, index=0),
            Item(name='PoolStorage::OOM', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56', expected=1516, index=0)
        ]),

        Group(name='Streams', functions=[
            Item(name='MemoryStream::ctor', pattern='48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B DA 49 8B E9', expected=3, index=1)
        ]),

        Group(name='TweakDB', functions=[
            Item(name='Get', pattern='48 83 EC 48 48 8B 05 ? ? ? ? 48 85 C0 0F 85 8A 00 00 00'),
            Item(name='StaticFlatDataBuffer', pattern='48 89 1D ? ? ? ? 41 89 BF 30 01 00 00'),
            Item(name='InitFlatValue_ExceptInt32', pattern='48 89 5C 24 20 55 41 54 41 55 41 56 41 57 48 83 EC 20 65 48 8B 04 25 58 00 00 00 4C', expected=4, index=0),
            Item(name='FlatInt32ValueVftable', pattern='48 8D 3D ? ? ? ? 65 48 8B 04 25 58 00 00 00 4C 8B'),
            Item(name='FlatArrayInt32ValueVftable', pattern='48 8D 05 ? ? ? ? 48 89 06 48 8D 55 67', expected=2),
            Item(name='CreateRecord', pattern='48 89 5C 24 08 ? 89 ? 24 18 57 48 83 EC 30 8B C2'),
        ]),

        Group(name='OpcodeHandlers', functions=[
            Item(name='Get', pattern='4C 8D 15 ? ? ? ? 33 C0 48 C7 44 24 20 00 00 00 00', expected=11, index=0)
        ]),

        Group(name='CRTTIScriptReferenceType', functions=[
            Item(name='ctor', pattern='48 89 5C 24 18 57 48 83 EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 05 '),
            Item(name='Set', pattern='48 89 5C 24 20 57 48 83  EC 20 4C 89 41 18 48 8B')
        ])
    ]
