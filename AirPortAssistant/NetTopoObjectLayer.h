/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "AirPortAssistant-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableArray, BubbleTextLayer, NSString;

__attribute__((visibility("hidden")))
@interface NetTopoObjectLayer : XXUnknownSuperclass {
	id _associatedNode;
	float _layoutScale;
	BOOL _smallSize;
	CGSize _boundsSizeConstraint;
	CGImageRef _objectImage;
	BOOL _selectable;
	CGColorRef _selectionColor;
	CGColorRef _labelUnselectedFillColor;
	CGColorRef _labelSelectedFillColor;
	CGColorRef _labelSelectedFillColor2;
	CGColorRef _labelUnselectedTextColor;
	CGColorRef _labelSelectedTextColor;
	CGColorRef _secondaryLabelUnselectedTextColor;
	CGColorRef _secondaryLabelSelectedTextColor;
	CGRect _imageFrame;
	CGRect _imageCroppedFrame;
	CGSize _selectionSize;
	NSString* _labelString;
	BubbleTextLayer* _labelLayer;
	float _labelPinnedHeight;
	NSString* _secondaryLabelString;
	BubbleTextLayer* _secondaryLabelLayer;
	CGImageRef _statusLights[4];
	NSTimer* _statusLightTimer;
	float _statusLightInterval;
	unsigned _statusLightState;
	unsigned _statusLightMode;
	unsigned _row;
	unsigned _column;
	unsigned _number;
	float _prelim;
	float _mod;
	float _change;
	float _shift;
	BOOL _isExpanded;
	NetTopoObjectLayer* _contourThread;
	NetTopoObjectLayer* _ancestor;
	BOOL _selected;
	BOOL _ghosted;
	NetTopoObjectLayer* _parent;
	NSMutableArray* _children;
}
@property(assign, nonatomic) CGSize selectionSize;	// @synthesize=_selectionSize
@property(assign, nonatomic, getter=isGhosted) BOOL ghosted;	// @dynamic
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// @dynamic
@property(assign, nonatomic, getter=isSelectable) BOOL selectable;	// @synthesize=_selectable
@property(assign, nonatomic) unsigned statusLightMode;
@property(retain, nonatomic) CGImageRef statusBadgeImage;
@property(retain, nonatomic) CGImageRef statusLightImage;
@property(retain, nonatomic) CGImageRef objectImage;	// @synthesize=_objectImage
@property(readonly, assign, nonatomic) unsigned numberOfChildren;
@property(retain, nonatomic) NSMutableArray* children;	// @synthesize=_children
@property(readonly, assign, nonatomic) NetTopoObjectLayer* parentDevice;
@property(retain, nonatomic) NetTopoObjectLayer* parent;	// @synthesize=_parent
@property(retain, nonatomic) NSString* secondaryLabel;
@property(assign, nonatomic) float labelPinnedHeight;	// @synthesize=_labelPinnedHeight
@property(retain, nonatomic) NSString* label;
@property(retain, nonatomic) id associatedNode;	// @synthesize=_associatedNode
@property(assign, nonatomic) NetTopoObjectLayer* ancestor;	// @synthesize=_ancestor
@property(assign, nonatomic) NetTopoObjectLayer* contourThread;	// @synthesize=_contourThread
@property(assign, nonatomic, getter=isExpanded) BOOL expanded;	// @synthesize=_isExpanded
@property(assign, nonatomic) unsigned number;	// @synthesize=_number
@property(assign, nonatomic) float shift;	// @synthesize=_shift
@property(assign, nonatomic) float change;	// @synthesize=_change
@property(assign, nonatomic) float mod;	// @synthesize=_mod
@property(assign, nonatomic) float prelim;	// @synthesize=_prelim
@property(assign, nonatomic) unsigned column;	// @synthesize=_column
@property(assign, nonatomic) unsigned row;	// @synthesize=_row
@property(assign, nonatomic) CGSize boundsSizeConstraint;
@property(assign, nonatomic) BOOL smallSize;	// @synthesize=_smallSize
@property(assign, nonatomic) float layoutScale;	// @synthesize=_layoutScale
+(BOOL)needsDisplayForKey:(id)key;
// declared property setter: -(void)setLabelPinnedHeight:(float)height;
// declared property getter: -(float)labelPinnedHeight;
// declared property setter: -(void)setSelectable:(BOOL)selectable;
// declared property getter: -(BOOL)isSelectable;
// declared property setter: -(void)setSelectionSize:(CGSize)size;
// declared property getter: -(CGSize)selectionSize;
// declared property setter: -(void)setObjectImage:(CGImageRef)image;
// declared property getter: -(CGImageRef)objectImage;
// declared property setter: -(void)setChildren:(id)children;
// declared property getter: -(id)children;
// declared property setter: -(void)setParent:(id)parent;
// declared property getter: -(id)parent;
// declared property setter: -(void)setAssociatedNode:(id)node;
// declared property getter: -(id)associatedNode;
// declared property setter: -(void)setAncestor:(id)ancestor;
// declared property getter: -(id)ancestor;
// declared property setter: -(void)setContourThread:(id)thread;
// declared property getter: -(id)contourThread;
// declared property setter: -(void)setExpanded:(BOOL)expanded;
// declared property getter: -(BOOL)isExpanded;
// declared property setter: -(void)setNumber:(unsigned)number;
// declared property getter: -(unsigned)number;
// declared property setter: -(void)setShift:(float)shift;
// declared property getter: -(float)shift;
// declared property setter: -(void)setChange:(float)change;
// declared property getter: -(float)change;
// declared property setter: -(void)setMod:(float)mod;
// declared property getter: -(float)mod;
// declared property setter: -(void)setPrelim:(float)prelim;
// declared property getter: -(float)prelim;
// declared property setter: -(void)setColumn:(unsigned)column;
// declared property getter: -(unsigned)column;
// declared property setter: -(void)setRow:(unsigned)row;
// declared property getter: -(unsigned)row;
// declared property setter: -(void)setSmallSize:(BOOL)size;
// declared property getter: -(BOOL)smallSize;
-(id)debugDescription;
-(id)describeOne:(id)one uiLayer:(id)layer indent:(unsigned)indent;
-(CGRect)getFrameContainingAllSublayers;
-(CGRect)getUserInteractionBounds;
-(XXStruct_BUymIA)getConnectionAttachmentLocations;
-(CGRect)getImageSelectionBounds;
-(void)drawInContext:(CGContextRef)context;
-(void)layoutSublayers;
// declared property getter: -(float)layoutScale;
// declared property setter: -(void)setLayoutScale:(float)scale;
// declared property setter: -(void)setStatusLightMode:(unsigned)mode;
-(void)updateStatusLight:(id)light;
// declared property getter: -(unsigned)statusLightMode;
// declared property setter: -(void)setStatusBadgeImage:(CGImageRef)image;
// declared property getter: -(CGImageRef)statusBadgeImage;
// declared property setter: -(void)setStatusLightImage:(CGImageRef)image;
// declared property getter: -(CGImageRef)statusLightImage;
-(void)deallocStatusImages;
-(void)initializeStatusImages;
// declared property setter: -(void)setSecondaryLabel:(id)label;
// declared property getter: -(id)secondaryLabel;
// declared property setter: -(void)setLabel:(id)label;
// declared property getter: -(id)label;
// declared property getter: -(CGSize)boundsSizeConstraint;
// declared property setter: -(void)setBoundsSizeConstraint:(CGSize)constraint;
-(void)removeChild:(id)child;
-(void)addChild:(id)child;
-(void)insertChild:(id)child atIndex:(unsigned)index;
-(id)lastChild;
-(id)firstChild;
-(id)childAtIndex:(unsigned)index;
// declared property getter: -(unsigned)numberOfChildren;
// declared property getter: -(id)parentDevice;
-(void)dealloc;
-(id)init;
@end

