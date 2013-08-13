/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSString;

@interface MLEQPreset : NSObject {
@private
	NSString* _name;
	NSString* _localizedName;
	int _builtInPresetType;
}
@property(readonly, retain) NSString* name;	// converted property
@property(readonly, retain) NSString* localizedName;	// converted property
@property(readonly, assign) int builtInPresetType;	// converted property
+(id)eqPresetForBuiltInPresetType:(int)presetType;
+(id)eqPresetForName:(id)name;
-(void).cxx_destruct;
-(int)typeForAVController;
// converted property getter: -(int)builtInPresetType;
// converted property getter: -(id)localizedName;
// converted property getter: -(id)name;
-(id)initWithBuiltInPresetType:(int)presetType;
@end

