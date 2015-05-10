// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from filewriter.djinni

#import <Foundation/Foundation.h>

/**
 * We provide implementation for muse_file and you should ignore this class in
 * most cases. Create MuseFileWritter using MuseManager.
 * But you may provide your own implementation of Muse File if your case is
 * specific. <br>
 * <B>Threading<B> If Muse File implementation is used only to from Muse File
 * Writer, then it should not care about synchronization, because it is provided
 * by Muse File Writer. Otherwise, make sure open/write/close methods are thread-safe.
 */

@protocol IXNMuseFile

/**
 * Opens/creates file based on provided filename. Filename can include path
 * as well.<br>
 * This method is called when file writer is created.
 */
- (void)open;

/**
 * Writes buffer to file. <br>
 * This method is called when you flush FileWritter buffer
 */
- (void)write:(NSData *)buffer;

/**
 * Closes opened file. <br>
 * This method is called when FileWriter is destroyed, or when close()
 * is called on FileWriter.
 */
- (void)close;

@end