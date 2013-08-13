/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSEntityDescription, NSOperationQueue, TIPersistentQueue, NSArray, NSMutableSet;

@interface TIUserDictionaryController : XXUnknownSuperclass {
@private
	NSMutableSet* _pendingDeletions;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSArray* _cachedAllWords;
	NSOperationQueue* _operationQueue;
	TIPersistentQueue* _changeJournal;
}
@property(readonly, assign, nonatomic) NSMutableSet* pendingDeletions;
@property(retain) NSArray* cachedAllWords;	// @synthesize=_cachedAllWords
@property(readonly, assign, nonatomic) TIPersistentQueue* changeJournal;	// @synthesize=_changeJournal
@property(readonly, assign, nonatomic) NSOperationQueue* operationQueue;	// @synthesize=_operationQueue
@property(readonly, assign, nonatomic) NSOperationQueue* dictionaryAccessQueue;
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator* persistentStoreCoordinator;	// @synthesize=_persistentStoreCoordinator
@property(readonly, assign, nonatomic) NSArray* userWordSortDescriptors;
@property(readonly, assign, nonatomic) NSEntityDescription* userWordEntityDescription;
@property(readonly, assign) NSManagedObjectContext* managedObjectContext;	// @synthesize=_managedObjectContext
+(id)addPersistentStoreAtURL:(id)url ubiquitousContentURL:(id)url2 toCoordinator:(id)coordinator;
+(id)newPersistentStoreCoordinatorWithURL:(id)url ubiquitousContentURL:(id)url2;
+(id)newManagedObjectModel;
+(id)cloudPersistentStorePath;
+(id)localPersistentStorePath;
+(void)loadWordKeyPairs:(id)pairs;
// declared property getter: -(id)changeJournal;
// declared property getter: -(id)operationQueue;
// declared property setter: -(void)setCachedAllWords:(id)words;
// declared property getter: -(id)cachedAllWords;
// declared property getter: -(id)persistentStoreCoordinator;
// declared property getter: -(id)managedObjectContext;
-(void)unloadManagedObjectContext;
-(void)loadManagedObjectContext;
-(void)unloadPersistentStore;
-(void)loadPersistentStore;
-(id)newFetchRequestForContext:(id)context;
-(id)predicateFilteringForSearchText:(id)searchText;
// declared property getter: -(id)userWordSortDescriptors;
-(id)userWordSortDescriptorsForContext:(id)context;
-(Class)userWordClassForContext:(id)context;
// declared property getter: -(id)userWordEntityDescription;
-(id)userWordEntityDescriptionForContext:(id)context;
-(void)userDictionaryStoreDidSave:(id)userDictionaryStore;
-(void)managedObjectContextDidSave:(id)managedObjectContext;
-(void)invalidateCachedWords;
-(BOOL)save;
-(void)performSelector:(SEL)selector withEachWordIn:(id)anIn;
// declared property getter: -(id)pendingDeletions;
-(void)convertUpdatesToInsertionsAndDeletions;
-(void)sendChangesToKBD;
-(void)revertWord:(id)word;
-(void)deleteWord:(id)word;
-(id)userWordWithCommittedValues:(id)committedValues;
-(id)emptyWord;
-(id)allWords;
-(id)arrayOfUniqueWordsFromSortedArray:(id)sortedArray;
-(BOOL)isUserDictionaryAccessible;
-(BOOL)isOnUserDictionaryAccessQueue;
// declared property getter: -(id)dictionaryAccessQueue;
-(id)persistentStoreURL;
-(id)persistentStoreURLWithUbiquitousContentURL:(id*)ubiquitousContentURL;
-(void)dealloc;
-(void)initializePersistentStoreCoordinator;
-(id)init;
@end

