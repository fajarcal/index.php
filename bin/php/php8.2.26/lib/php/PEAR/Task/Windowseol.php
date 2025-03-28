<?php
/**
 * <tasks:windowseol>
 *
 * PHP versions 4 and 5
 *
 * @category  pear
 * @package   PEAR
 * @author    Greg Beaver <cellog@php.net>
 * @copyright 1997-2009 The Authors
 * @license   http://opensource.org/licenses/bsd-license.php New BSD License
 * @link      http://pear.php.net/package/PEAR
 * @since     File available since Release 1.4.0a1
 */
/**
 * Base class
 */
require_once 'PEAR/Task/Common.php';
/**
 * Implements the windows line endsings file task.
 *
 * @category  pear
 * @package   PEAR
 * @author    Greg Beaver <cellog@php.net>
 * @copyright 1997-2009 The Authors
 * @license   http://opensource.org/licenses/bsd-license.php New BSD License
 * @version   Release: 1.10.15
 * @link      http://pear.php.net/package/PEAR
 * @since     Class available since Release 1.4.0a1
 */
class PEAR_Task_Windowseol extends PEAR_Task_Common
{
    public $type = 'simple';
    public $phase = PEAR_TASK_PACKAGE;
    public $_replacements;

    /**
     * Validate the raw xml at parsing-time.
     *
     * @param  PEAR_PackageFile_v2
     * @param  array raw, parsed xml
     * @param  PEAR_Config
     */
    public static function validateXml($pkg, $xml, $config, $fileXml)
    {
        if ($xml != '') {
            return array(PEAR_TASK_ERROR_INVALID, 'no attributes allowed');
        }

        return true;
    }

    /**
     * Initialize a task instance with the parameters
     * @param array raw, parsed xml
     * @param unused
     * @param unused
     */
    public function init($xml, $attribs, $lastVersion = null)
    {
    }

    /**
     * Replace all line endings with windows line endings
     *
     * See validateXml() source for the complete list of allowed fields
     *
     * @param  PEAR_PackageFile_v1|PEAR_PackageFile_v2
     * @param  string file contents
     * @param  string the eventual final file location (informational only)
     * @return string|false|PEAR_Error false to skip this file, PEAR_Error to fail
     *                                 (use $this->throwError), otherwise return the new contents
     */
    public function startSession($pkg, $contents, $dest)
    {
        $this->logger->log(3, "replacing all line endings with \\r\\n in $dest");

        return preg_replace("/\r\n|\n\r|\r|\n/", "\r\n", $contents);
    }
}
