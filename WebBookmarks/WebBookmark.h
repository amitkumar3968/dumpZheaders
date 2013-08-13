/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import "WebBookmarks-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData, NSDictionary, NSDate;

@interface WebBookmark : XXUnknownSuperclass {
	BOOL _folder;
	NSString* _title;
	NSString* _url;
	NSString* _UUID;
	NSString* _serverID;
	NSString* _syncKey;
	NSData* _syncData;
	BOOL _editable;
	BOOL _deletable;
	BOOL _hidden;
	BOOL _fetchedIconData;
	NSData* _iconData;
	BOOL _locallyAdded;
	int _archiveStatus;
	NSDictionary* _extraAttributes;
	NSDictionary* _localAttributes;
	unsigned _id;
	unsigned _parentID;
	unsigned _specialID;
	unsigned _orderIndex;
	BOOL _inserted;
	BOOL _needsSyncUpdate;
}
@property(retain, nonatomic) NSDictionary* localAttributes;	// @synthesize=_localAttributes
@property(retain, nonatomic) NSDictionary* extraAttributes;	// @synthesize=_extraAttributes
@property(readonly, assign, nonatomic, getter=isInserted) BOOL inserted;	// @synthesize=_inserted
@property(readonly, assign, nonatomic, getter=isFolder) BOOL folder;	// @synthesize=_folder
@property(readonly, assign, nonatomic, getter=isHidden) BOOL hidden;	// @synthesize=_hidden
@property(readonly, assign, nonatomic, getter=isDeletable) BOOL deletable;	// @synthesize=_deletable
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// @synthesize=_editable
@property(readonly, assign, nonatomic) unsigned specialID;	// @synthesize=_specialID
@property(readonly, assign, nonatomic) NSString* UUID;	// @synthesize=_UUID
@property(readonly, assign, nonatomic) unsigned identifier;	// @synthesize=_id
@property(readonly, assign, nonatomic) unsigned parentID;	// @synthesize=_parentID
@property(retain, nonatomic) NSString* address;	// @synthesize=_url
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
@property(assign, nonatomic) BOOL needsSyncUpdate;	// @synthesize=_needsSyncUpdate
@property(assign, nonatomic) int databaseWriteTestValue;
@property(retain, nonatomic) NSString* localPreviewText;
@property(retain, nonatomic) NSDictionary* nextPageURLs;
@property(retain, nonatomic) NSDate* dateLastFetched;
@property(retain, nonatomic) NSDate* dateLastViewed;
@property(retain, nonatomic) NSDate* dateAdded;
@property(retain, nonatomic) NSDate* dateLastArchived;
@property(assign, nonatomic) int archiveStatus;
@property(assign, nonatomic) BOOL locallyAdded;
@property(retain, nonatomic) NSData* iconData;
@property(assign, nonatomic) BOOL fetchedIconData;
@property(retain, nonatomic) NSString* previewText;
@property(retain, nonatomic) NSData* syncData;
@property(retain, nonatomic) NSString* syncKey;
@property(retain, nonatomic) NSString* serverID;
// declared property setter: -(void)setExtraAttributes:(id)attributes;
// declared property getter: -(id)extraAttributes;
// declared property setter: -(void)setLocalAttributes:(id)attributes;
// declared property getter: -(id)localAttributes;
// declared property setter: -(void)setNeedsSyncUpdate:(BOOL)update;
// declared property getter: -(BOOL)needsSyncUpdate;
// declared property getter: -(BOOL)isInserted;
// declared property getter: -(BOOL)isFolder;
// declared property getter: -(BOOL)isHidden;
// declared property getter: -(BOOL)isDeletable;
// declared property getter: -(BOOL)isEditable;
// declared property getter: -(unsigned)specialID;
// declared property getter: -(id)UUID;
// declared property getter: -(unsigned)identifier;
// declared property getter: -(unsigned)parentID;
// declared property getter: -(id)address;
// declared property getter: -(id)title;
// declared property setter: -(void)setAddress:(id)address;
// declared property setter: -(void)setTitle:(id)title;
-(BOOL)isReadingListFolder;
-(id)localizedTitle;
-(id)description;
-(id)shortTypeDescription;
-(void)dealloc;
-(id)init;
-(id)initFolderWithParentID:(unsigned)parentID;
-(id)initStaticWithTitle:(id)title address:(id)address;
-(id)initWithTitle:(id)title address:(id)address;
// declared property getter: -(id)syncData;
// declared property setter: -(void)setSyncData:(id)data;
// declared property getter: -(id)syncKey;
// declared property setter: -(void)setSyncKey:(id)key;
// declared property getter: -(id)serverID;
// declared property setter: -(void)setServerID:(id)anId;
-(void)_setHidden:(BOOL)hidden;
-(void)_setInserted:(BOOL)inserted;
-(void)_setUUID:(id)uuid;
-(void)_setID:(unsigned)anId;
-(void)_setOrderIndex:(unsigned)index;
-(void)_setParentID:(unsigned)anId;
-(unsigned)_orderIndex;
-(void)_markSpecial:(unsigned)special;
-(id)_initWithSqliteRow:(sqlite3_stmt*)sqliteRow;
// declared property setter: -(void)setDatabaseWriteTestValue:(int)value;
// declared property getter: -(int)databaseWriteTestValue;
-(void)cleanupRedundantPreviewText;
// declared property setter: -(void)setLocalPreviewText:(id)text;
// declared property getter: -(id)localPreviewText;
// declared property getter: -(id)nextPageURLs;
// declared property setter: -(void)setNextPageURLs:(id)urls;
-(void)setTitle:(id)title previewText:(id)text dateLastViewed:(id)viewed dateLastFetched:(id)fetched;
// declared property setter: -(void)setDateLastFetched:(id)fetched;
// declared property getter: -(id)dateLastFetched;
// declared property setter: -(void)setDateLastViewed:(id)viewed;
// declared property getter: -(id)dateLastViewed;
// declared property setter: -(void)setDateAdded:(id)added;
// declared property getter: -(id)dateAdded;
// declared property setter: -(void)setDateLastArchived:(id)archived;
// declared property getter: -(id)dateLastArchived;
// declared property setter: -(void)setArchiveStatus:(int)status;
// declared property getter: -(int)archiveStatus;
// declared property setter: -(void)setLocallyAdded:(BOOL)added;
// declared property getter: -(BOOL)locallyAdded;
// declared property setter: -(void)setIconData:(id)data;
// declared property getter: -(id)iconData;
// declared property setter: -(void)setFetchedIconData:(BOOL)data;
// declared property getter: -(BOOL)fetchedIconData;
// declared property setter: -(void)setPreviewText:(id)text;
// declared property getter: -(id)previewText;
-(BOOL)isReadingListItem;
-(id)initReadingListBookmarkWithTitle:(id)title address:(id)address previewText:(id)text iconData:(id)data;
-(BOOL)fullArchiveAvailable;
-(BOOL)shouldReattemptArchive;
-(void)clearArchiveSynchronously;
-(void)clearArchive;
-(void)_removeDirectoryAtPath:(id)path;
-(unsigned long long)archiveSize;
-(unsigned long long)_sizeForFileOrDirectory:(id)fileOrDirectory withAttributes:(id)attributes;
-(BOOL)writeOfflineWebView:(id)view asArchive:(BOOL)archive inReaderForm:(BOOL)readerForm;
-(id)webarchivePathForNextPageURL:(id)nextPageURL;
-(id)webarchivePathInReaderForm:(BOOL)readerForm fileExists:(BOOL*)exists;
-(id)_suggestedFileNameForWebView:(id)webView;
-(void)_modifyLocalReadingListAttributes:(id)attributes;
-(void)_modifyExtraReadingListAttributes:(id)attributes;
-(id)_readingListPropertyNamed:(id)named;
@end

