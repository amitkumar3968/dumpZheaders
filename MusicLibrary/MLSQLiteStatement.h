/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import </libobjc.A.h>

@class MLSQLiteConnectionQueue, NSString, MLSQLiteConnection;

@interface MLSQLiteStatement : NSObject {
@private
	MLSQLiteConnection* _connection;
	NSString* _sql;
	sqlite3_stmt* _stmt;
	MLSQLiteConnectionQueue* _connectionQueue;
	BOOL _clearBindingsAfterRunning;
	BOOL _hasBindings;
	BOOL _readonly;
}
@property(readonly, assign, nonatomic) sqlite3_stmt* stmt;
@property(assign, nonatomic) BOOL clearBindingsAfterRunning;	// @synthesize=_clearBindingsAfterRunning
// declared property setter: -(void)setClearBindingsAfterRunning:(BOOL)running;
// declared property getter: -(BOOL)clearBindingsAfterRunning;
-(void).cxx_destruct;
-(id)objectValueForFirstRowAndColumn;
-(id)stringValueForFirstRowAndColumn;
-(long long)int64ValueForFirstRowAndColumn;
-(BOOL)hasAtLeastOneRow;
-(BOOL)_onQueueEnumerateRowsWithBusyHandler:(id)busyHandler cancelHandler:(id)handler valueHandler:(id)handler3;
-(BOOL)enumerateRowsWithBusyHandler:(id)busyHandler cancelHandler:(id)handler valueHandler:(id)handler3;
-(BOOL)enumerateRowsWithValueHandler:(id)valueHandler;
-(BOOL)enumerateRowsWithBusyHandler:(id)busyHandler handler:(id)handler;
-(BOOL)runWithBusyHandler:(id)busyHandler;
-(BOOL)enumerateRowsWithHandler:(id)handler;
-(BOOL)run;
-(int)positionForParameterWithName:(const char*)name;
-(void)bindValuesForParameterNames:(id)parameterNames;
-(void)bindValue:(id)value forParameterAtPosition:(int)position;
-(void)bindDBValue:(MLDBValue*)value forParameterAtPosition:(int)position;
-(void)bindUTF8StringNoCopy:(const char*)copy length:(int)length forParameterAtPosition:(int)position;
-(void)bindUTF8StringNoCopy:(const char*)copy forParameterAtPosition:(int)position;
-(void)bindUTF8String:(const char*)string forParameterAtPosition:(int)position;
-(void)bindBytesNoCopy:(const void*)copy length:(int)length forParameterAtPosition:(int)position;
-(void)bindBytes:(const void*)bytes length:(int)length forParameterAtPosition:(int)position;
-(void)bindNullForParameterAtPosition:(int)position;
-(void)bindDouble:(double)aDouble forParameterAtPosition:(int)position;
-(void)bindInt64:(long long)a64 forParameterAtPosition:(int)position;
-(void)bindInt:(int)int forParameterAtPosition:(int)position;
// declared property getter: -(sqlite3_stmt*)stmt;
-(void)clearBindings;
-(void)close;
-(id)description;
-(void)dealloc;
-(id)initWithConnection:(id)connection SQL:(id)sql;
@end

