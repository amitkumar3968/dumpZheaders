/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Altitude.framework/Altitude
 */

typedef struct _NSZone NSZone;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	float _field1;
	float _field2;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;

typedef struct Position3d {
	double _latitude;
	double _longitude;
	double _height;
} Position3d;

typedef struct _ACoordinate {
	double _field1;
	double _field2;
} ACoordinate;

typedef struct Vector2i {
	int _x;
	int _y;
} Vector2i;

typedef struct CameraManager {
	/*function-pointer*/ void** _vptr$CameraManager;
	bool _panBegin;
	bool _panInProgress;
	Position3d _panStartPosition;
	Vector2i _panPreviousCursor;
	Vector2i _panCurrentCursor;
	bool _rotateBegin;
	bool _rotateInProgress;
	bool _rotateEnd;
	Position3d _rotateStartPosition;
	Vector2i _rotatePreviousCursor;
	Vector2i _rotateCurrentCursor;
	double _rotateAngle;
	bool _tiltBegin;
	bool _tiltInProgress;
	bool _tiltEnd;
	bool _tiltRubberBandInProgress;
	Position3d _tiltStartPosition;
	Vector2i _tiltPreviousCursor;
	Vector2i _tiltCurrentCursor;
	double _tiltAngle;
	double _tiltRubberBandAngle;
	bool _zoomBegin;
	bool _zoomInProgress;
	bool _zoomEnd;
	bool _zoomRubberBandInProgress;
	Position3d _zoomStartPosition;
	Vector2i _zoomPreviousCursor;
	Vector2i _zoomCurrentCursor;
	double _zoomFactor;
	double _zoomRubberBandDistance;
} CameraManager;

typedef struct CGContext* CGContextRef;

typedef struct _AGeocentric {
	double _field1;
	double _field2;
	double _field3;
} AGeocentric;

typedef struct Viewer {
	/*function-pointer*/ void** _field1;
} Viewer;

typedef struct GlobeView {
	/*function-pointer*/ void** _field1;
} GlobeView;

typedef struct GlobeViewImp GlobeViewImp;

typedef struct Viewport {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
} Viewport;

typedef struct Scene Scene;

typedef struct __imp imp;

typedef struct locale {
	imp* _field1;
} locale;

typedef struct __sFILE* FILERef;

template<>
struct codecvt<char, char, __mbstate_t>;

template<>
struct basic_filebuf<char, std::__1::char_traits<char> > {
	/*function-pointer*/ void** _field1;
	locale _field2;
	char* _field3;
	char* _field4;
	char* _field5;
	char* _field6;
	char* _field7;
	char* _field8;
	char* _field9;
	char* _field10;
	char* _field11;
	BOOL _field12[8];
	unsigned _field13;
	char* _field14;
	unsigned _field15;
	FILERef _field16;
	codecvt<char, char, __mbstate_t>* _field17;
	union {
		BOOL _field1[128];
		long long _field2;
	} _field18;
	unsigned _field19;
	unsigned _field20;
	bool _field21;
	bool _field22;
	bool _field23;
};

template<>
struct basic_ostream<char, std::__1::char_traits<char> >;

template<>
struct basic_ofstream<char, std::__1::char_traits<char> > {
	/*function-pointer*/ void** _field1;
	basic_filebuf<char, std::__1::char_traits<char> > _field2;
	/*function-pointer*/ void** _field3;
	unsigned _field4;
	int _field5;
	int _field6;
	unsigned _field7;
	unsigned _field8;
	void* _field9;
	void* _field10;
	/*function-pointer*/ void** _field11;
	int* _field12;
	unsigned _field13;
	unsigned _field14;
	long* _field15;
	unsigned _field16;
	unsigned _field17;
	void** _field18;
	unsigned _field19;
	unsigned _field20;
	basic_ostream<char, std::__1::char_traits<char> >* _field21;
	BOOL _field22;
};

typedef struct AnimationReferenceTimer {
	double _field1;
	double _field2;
	double _field3;
} AnimationReferenceTimer;

typedef struct __long {
	unsigned _field1;
	unsigned _field2;
	char* _field3;
} long;

typedef struct __short {
	union {
		unsigned char _field1;
		BOOL _field2;
	} _field1;
	BOOL _field2[11];
} short;

typedef struct __raw {
	unsigned long _field1[3];
} raw;

typedef struct __rep {
	union {
		long _field1;
		short _field2;
		raw _field3;
	} _field1;
} rep;

template<>
struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > {
	rep _field1;
};

template<>
struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char> > _field1;
};

template<>
struct __compressed_pair<c3::Viewer::ViewerMessage **, std::__1::allocator<c3::Viewer::ViewerMessage *> > {
	int** _field1;
};

template<>
struct __split_buffer<c3::Viewer::ViewerMessage *, std::__1::allocator<c3::Viewer::ViewerMessage *> > {
	int** _field1;
	int** _field2;
	int** _field3;
	__compressed_pair<c3::Viewer::ViewerMessage **, std::__1::allocator<c3::Viewer::ViewerMessage *> > _field4;
};

template<>
struct __compressed_pair<unsigned long, std::__1::allocator<c3::Viewer::ViewerMessage> > {
	unsigned long _field1;
};

template<>
struct deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage> > {
	__split_buffer<c3::Viewer::ViewerMessage *, std::__1::allocator<c3::Viewer::ViewerMessage *> > _field1;
	unsigned _field2;
	__compressed_pair<unsigned long, std::__1::allocator<c3::Viewer::ViewerMessage> > _field3;
};

template<>
struct queue<c3::Viewer::ViewerMessage, std::__1::deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage>> > {
	deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage> > _field1;
};

typedef struct ViewerCallback ViewerCallback;

template<>
struct __tree_node<c3::ManifestListener *, void *>;

template<>
struct __tree_node_base<void *>;

template<>
struct __tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void* >* __left_;
};

template<>
struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<c3::ManifestListener *, void *>> > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> _field1;
};

template<>
struct __compressed_pair<unsigned long, std::__1::less<c3::ManifestListener *> > {
	unsigned long _field1;
};

template<>
struct __tree<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > {
	__tree_node<c3::ManifestListener* , void* >* _field1;
	__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<c3::ManifestListener *, void *>> > _field2;
	__compressed_pair<unsigned long, std::__1::less<c3::ManifestListener *> > _field3;
};

template<>
struct set<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > {
	__tree<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > _field1;
};

typedef struct Stylesheet Stylesheet;

typedef struct __shared_weak_count shared_weak_count;

template<>
struct shared_ptr<altitude::Stylesheet> {
	Stylesheet* _field1;
	shared_weak_count* _field2;
};

typedef struct ViewerImp {
	/*function-pointer*/ void** _field1;
	GlobeViewImp* _field2;
	int _field3;
	int _field4;
	int _field5;
	double _field6;
	double _field7;
	Viewport _field8;
	Scene* _field9;
	basic_ofstream<char, std::__1::char_traits<char> > _field10;
	bool _field11;
	bool _field12;
	AnimationReferenceTimer _field13;
	bool _field14;
	bool _field15;
	float _field16;
	float _field17[12];
	float _field18[8];
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _field19;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _field20;
	bool _field21;
	queue<c3::Viewer::ViewerMessage, std::__1::deque<c3::Viewer::ViewerMessage, std::__1::allocator<c3::Viewer::ViewerMessage>> > _field22;
	unsigned _field23;
	ViewerCallback* _field24;
	bool _field25;
	bool _field26;
	bool _field27;
	set<c3::ManifestListener *, std::__1::less<c3::ManifestListener *>, std::__1::allocator<c3::ManifestListener *> > _field28;
	shared_ptr<altitude::Stylesheet> _field29;
} ViewerImp;

typedef struct TestComponent TestComponent;

template<>
struct __compressed_pair<c3::test::TestComponent *, std::__1::allocator<c3::test::TestComponent> > {
	TestComponent* __first_;
};

template<>
struct vector<c3::test::TestComponent, std::__1::allocator<c3::test::TestComponent> > {
	TestComponent* __begin_;
	TestComponent* __end_;
	__compressed_pair<c3::test::TestComponent *, std::__1::allocator<c3::test::TestComponent> > __end_cap_;
};

template<>
struct __wrap_iter<c3::test::TestComponent *> {
	TestComponent* __i;
};

template<>
struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > {
	unsigned long __first_;
};

template<>
struct vector<bool, std::__1::allocator<bool> > {
	unsigned long* __begin_;
	unsigned __size_;
	__compressed_pair<unsigned long, std::__1::allocator<unsigned long> > __cap_alloc_;
};

typedef struct TestManager {
	vector<c3::test::TestComponent, std::__1::allocator<c3::test::TestComponent> > _testComponents;
	__wrap_iter<c3::test::TestComponent *> _activeTest;
	vector<bool, std::__1::allocator<bool> > result;
	ViewerImp* _viewer;
} TestManager;

typedef struct ReflectionBase ReflectionBase;

template<>
struct BitField<unsigned int> {
	unsigned mField;
};

typedef struct _GEOTileKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned type : 6;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
	unsigned provider : 8;
	unsigned expires : 1;
	unsigned reserved1 : 7;
	unsigned char reserved2[4];
} GEOTileKey;

typedef struct GeoServicesLoadJob GeoServicesLoadJob;

typedef struct GeoServicesLoadJobReference {
	GeoServicesLoadJob* _geoServicesLoadJob;
} GeoServicesLoadJobReference;

template<>
struct __tree_node<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>, void *>;

template<>
struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>, void *>> > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
};

template<>
struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_GEOTileKey, altitude::GeoServicesLoadJobReference, GEOTileKeyComp, true> > {
	unsigned long __first_;
};

template<>
struct __tree<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>, std::__1::__map_value_compare<_GEOTileKey, altitude::GeoServicesLoadJobReference, GEOTileKeyComp, true>, std::__1::allocator<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>> > {
	__tree_node<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>, void* >* __begin_node_;
	__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>, void *>> > __pair1_;
	__compressed_pair<unsigned long, std::__1::__map_value_compare<_GEOTileKey, altitude::GeoServicesLoadJobReference, GEOTileKeyComp, true> > __pair3_;
};

template<>
struct map<_GEOTileKey, altitude::GeoServicesLoadJobReference, GEOTileKeyComp, std::__1::allocator<std::__1::pair<const _GEOTileKey, altitude::GeoServicesLoadJobReference>> > {
	__tree<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>, std::__1::__map_value_compare<_GEOTileKey, altitude::GeoServicesLoadJobReference, GEOTileKeyComp, true>, std::__1::allocator<std::__1::pair<_GEOTileKey, altitude::GeoServicesLoadJobReference>> > __tree_;
};

template<>
struct KaroMapImp<_GEOTileKey, altitude::GeoServicesLoadJobReference, GEOTileKeyComp> {
	/*function-pointer*/ void** _vptr$ReflectionInterface;
	ReflectionBase* mPartOf;
	BitField<unsigned int> mFlags;
	unsigned mMappingsCount;
	GEOTileKey mDefaultKey;
	GeoServicesLoadJobReference mDefaultValue;
	unsigned mT0Flags;
	unsigned mT1Flags;
	map<_GEOTileKey, altitude::GeoServicesLoadJobReference, GEOTileKeyComp, std::__1::allocator<std::__1::pair<const _GEOTileKey, altitude::GeoServicesLoadJobReference>> > mMap;
};

typedef struct Mutex {
	void* mMutex;
} Mutex;

typedef struct {
	void* opaque1;
	long opaque2;
} XXStruct_YsZdjD;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct Context Context;

typedef struct Rtti Rtti;

typedef struct Node Node;

template<>
struct __compressed_pair<karo::Node **, std::__1::allocator<karo::Node *> > {
	Node** _field1;
};

template<>
struct vector<karo::Node *, std::__1::allocator<karo::Node *> > {
	Node** _field1;
	Node** _field2;
	__compressed_pair<karo::Node **, std::__1::allocator<karo::Node *> > _field3;
};

template<>
struct KaroArrayImp<karo::Node *> {
	/*function-pointer*/ void** _field1;
	ReflectionBase* _field2;
	BitField<unsigned int> _field3;
	unsigned _field4;
	vector<karo::Node *, std::__1::allocator<karo::Node *> > _field5;
	unsigned _field6;
};

typedef struct InputSlot {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _field1;
	Rtti* _field2;
	Node* _field3;
	KaroArrayImp<karo::Node *> _field4;
	bool _field5;
	BitField<unsigned int> _field6;
} InputSlot;

template<>
struct __tree_node<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>, void *>;

template<>
struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>, void *>> > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> _field1;
};

template<>
struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>>, true> > {
	unsigned long _field1;
};

template<>
struct __tree<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>, std::__1::__map_value_compare<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>> > {
	__tree_node<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>, void* >* _field1;
	__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>, void *>> > _field2;
	__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>>, true> > _field3;
};

template<>
struct map<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, karo::Node::InputSlot>> > {
	__tree<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>, std::__1::__map_value_compare<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, karo::Node::InputSlot>> > _field1;
};

template<>
struct KaroMapImp<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>> > {
	/*function-pointer*/ void** _field1;
	ReflectionBase* _field2;
	BitField<unsigned int> _field3;
	unsigned _field4;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _field5;
	InputSlot _field6;
	unsigned _field7;
	unsigned _field8;
	map<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, karo::Node::InputSlot>> > _field9;
};

typedef struct ToggleMutex {
	void* _field1;
	bool _field2;
} ToggleMutex;

typedef struct ManifestManager ManifestManager;

typedef struct GeoResourceObserverWrapper GeoResourceObserverWrapper;

typedef struct GeoResourceManager {
	/*function-pointer*/ void** _field1;
	ReflectionBase* _field2;
	BitField<unsigned int> _field3;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _field4;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _field5;
	Context* _field6;
	bool _field7;
	bool _field8;
	bool _field9;
	bool _field10;
	bool _field11;
	bool _field12;
	bool _field13;
	KaroMapImp<std::__1::basic_string<char>, karo::Node::InputSlot, std::__1::less<std::__1::basic_string<char>> > _field14;
	KaroArrayImp<karo::Node *> _field15;
	BitField<unsigned int> _field16;
	ToggleMutex _field17;
	ManifestManager* _field18;
	GeoResourceObserverWrapper* _field19;
} GeoResourceManager;


