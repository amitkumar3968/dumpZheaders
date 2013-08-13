/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface DADataHandler : XXUnknownSuperclass {
	void* _container;
}
@property(assign, nonatomic) void* container;	// @synthesize=_container
+(id)newDataHandlerForDataclass:(int)dataclass container:(void*)container;
// declared property getter: -(void*)container;
-(id)getDAObjectWithLocalItem:(void*)localItem serverId:(id)anId account:(id)account;
-(BOOL)closeDBAndSave:(BOOL)save;
-(void)openDB;
-(BOOL)wipeServerIds;
-(void)drainContainer;
-(CFArrayRef)copyOfAllLocalObjectsInContainer;
-(BOOL)saveContainer;
-(void*)copyLocalObjectFromId:(int)anId;
-(int)getIdFromLocalObject:(void*)localObject;
-(int)dataclass;
-(void)dealloc;
// declared property setter: -(void)setContainer:(void*)container;
-(id)initWithContainer:(void*)container;
@end
