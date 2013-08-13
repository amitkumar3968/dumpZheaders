/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel;

@interface AXWordDescriptionManager : NSObject {
@private
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSString* languageDialectCode;
}
@property(readonly, assign, nonatomic) NSManagedObjectModel* managedObjectModel;	// @synthesize=_managedObjectModel
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator* persistentStoreCoordinator;	// @synthesize=_persistentStoreCoordinator
@property(readonly, assign, nonatomic) NSManagedObjectContext* managedObjectContext;	// @synthesize=_managedObjectContext
@property(retain, nonatomic) NSString* languageDialectCode;	// @synthesize
+(id)sharedInstance;
// declared property setter: -(void)setLanguageDialectCode:(id)code;
// declared property getter: -(id)languageDialectCode;
// declared property getter: -(id)managedObjectModel;
// declared property getter: -(id)persistentStoreCoordinator;
-(id)languageCode;
// declared property getter: -(id)managedObjectContext;
-(id)descriptionForWord:(id)word;
-(void)dealloc;
@end
