/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import "NSObject.h"


@protocol NSKeyedUnarchiverDelegate <NSObject>
@optional
-(void)unarchiverDidFinish:(id)unarchiver;
-(void)unarchiverWillFinish:(id)unarchiver;
-(void)unarchiver:(id)unarchiver willReplaceObject:(id)object withObject:(id)object3;
-(id)unarchiver:(id)unarchiver didDecodeObject:(id)object;
-(Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)className originalClasses:(id)classes;
@end

